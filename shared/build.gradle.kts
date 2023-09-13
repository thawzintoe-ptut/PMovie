import org.jlleitschuh.gradle.ktlint.reporter.ReporterType

plugins {
    kotlin("multiplatform")
    kotlin("native.cocoapods")
    kotlin("plugin.serialization")
    alias(libs.plugins.androidLibrary)
    alias(libs.plugins.composeMultiplatform)
    alias(libs.plugins.moko.resources)
    alias(libs.plugins.ktlint)
}

kotlin {
    android {
        compilations.all {
            kotlinOptions {
                jvmTarget = "17"
            }
        }
    }
    jvm("desktop") {
        jvmToolchain(17)
    }

//    js(IR) {
//        browser()
//        binaries.executable()
//    }

    iosX64()
    iosArm64()
    iosSimulatorArm64()

    cocoapods {
        summary = "Shared iosCode for PMovie"
        version = "1.0.0"
        homepage = "https://github.com/thawzintoe-ptut/PMovie"
        ios.deploymentTarget = "16.4"
        podfile = project.file("../iosApp/Podfile")
        framework {
            baseName = "shared"
            isStatic = true
            export(libs.moko.resources)
            export("dev.icerock.moko:graphics:0.9.0")
            export(libs.mvvm.core)
            export(libs.mvvm.livedata)
            export(libs.mvvm.state)
        }
        extraSpecAttributes["resources"] = "['src/commonMain/resources/**', 'src/iosMain/resources/**']"
    }

    // Platform - specific dependencies
    sourceSets {
        val commonMain by getting {
            dependencies {
                implementation(compose.runtime)
                implementation(compose.foundation)
                implementation(compose.material3)
                implementation(compose.materialIconsExtended)
                @OptIn(org.jetbrains.compose.ExperimentalComposeLibrary::class)
                implementation(compose.components.resources)
                implementation(libs.kotlinx.serialization.json)

                api(libs.moko.resources)
                api(libs.moko.resources.compose)
                api(libs.mvvm.core) // only ViewModel, EventsDispatcher, Dispatchers.UI
                api(libs.mvvm.flow) // api mvvm-core, CFlow for native and binding extensions
                api(libs.mvvm.livedata) // api mvvm-core, LiveData and extensions
                api(libs.mvvm.state) // api mvvm-livedata, ResourceState class and extensions
                // compose multiplatform
                api(libs.mvvm.compose) // api mvvm-core, getViewModel for Compose Multiplatfrom
                api(libs.mvvm.flow.compose) // api mvvm-flow, binding extensions for Compose Multiplatfrom
                api(libs.mvvm.livedata.compose) // api mvvm-livedata, binding extensions for Compose Multiplatfrom

                implementation(libs.ktor.client.core)
                implementation(libs.ktor.client.logging)
                implementation(libs.ktor.serialization.kotlinx.json)
                implementation(libs.ktor.client.content.negotiation)

                api(libs.image.loader)
                api(libs.voyager.navigator)
                api(libs.voyager.tabNavigator)
            }
        }

        val androidMain by getting {
            dependencies {
                api(libs.activity.compose)
                api(libs.appcompat)
                api(libs.core.ktx)
                implementation(libs.ktor.client.okhttp)
            }
        }

        val desktopMain by getting {
            dependencies {
                // Desktop dependencies
            }
        }

//        val jsMain by getting {
//            dependencies {
//                // JVM dependencies
//            }
//        }

        val iosX64Main by getting
        val iosArm64Main by getting
        val iosSimulatorArm64Main by getting
        val iosMain by creating {
            dependsOn(commonMain)
            iosX64Main.dependsOn(this)
            iosArm64Main.dependsOn(this)
            iosSimulatorArm64Main.dependsOn(this)
            dependencies {
                implementation(libs.ktor.client.darwin)
                implementation(libs.ktor.client.ios)
            }
        }
    }
}

ktlint {
    version.set(libs.versions.ktlint.get())
    ignoreFailures.set(true)
    verbose.set(true)
    outputToConsole.set(true)
    enableExperimentalRules.set(true)
    reporters {
        reporter(ReporterType.PLAIN)
        reporter(ReporterType.CHECKSTYLE)
        reporter(ReporterType.SARIF)
    }
    filter {
        exclude("**/generated/**")
        include("**/kotlin/**")
    }
}

multiplatformResources {
    multiplatformResourcesPackage = libs.versions.nameSpace.get()
    multiplatformResourcesClassName = "SharedRes"
    disableStaticFrameworkWarning = true
    iosBaseLocalizationRegion = "en"
}

android {
    namespace = libs.versions.nameSpace.get()
    compileSdk = libs.versions.compileSdk.get().toInt()
    defaultConfig {
        minSdk = libs.versions.minSdk.get().toInt()

        compileOptions {
            sourceCompatibility = JavaVersion.VERSION_17
            targetCompatibility = JavaVersion.VERSION_17
        }
    }
    kotlin {
        jvmToolchain(libs.versions.jvmToolChain.get().toInt())
    }
}
