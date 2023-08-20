plugins {
    kotlin("multiplatform")
    kotlin("native.cocoapods")
    id("com.android.library")
    id("org.jetbrains.compose")
    id("dev.icerock.mobile.multiplatform-resources")
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
        ios.deploymentTarget = "14.1"
        podfile = project.file("../iosApp/Podfile")
        framework {
            baseName = "shared"
            isStatic = true
            export("dev.icerock.moko:resources:0.23.0")
            export("dev.icerock.moko:graphics:0.9.0")
            export("dev.icerock.moko:mvvm-core:0.16.1")
            export("dev.icerock.moko:mvvm-livedata:0.16.1")
            export("dev.icerock.moko:mvvm-state:0.16.1")
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
            }
        }

        val androidMain by getting {
            dependencies {}
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
            }
        }
    }
}

multiplatformResources {
    multiplatformResourcesPackage = "com.ptut.movie.app.shared"
    multiplatformResourcesClassName = "SharedRes"
    disableStaticFrameworkWarning = true
    iosBaseLocalizationRegion = "en"
}

android {
    namespace = "com.ptut.movie.app.shared"
    compileSdk = (findProperty("android.compileSdk") as String).toInt()
    defaultConfig {
        minSdk = (findProperty("android.minSdk") as String).toInt()

        compileOptions {
            sourceCompatibility = JavaVersion.VERSION_17
            targetCompatibility = JavaVersion.VERSION_17
        }
    }
    kotlin {
        jvmToolchain(17)
    }
}
