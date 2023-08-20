plugins {
    kotlin("multiplatform")
    id("org.jetbrains.compose")
    id("dev.icerock.mobile.multiplatform-resources")
}

kotlin {
//    js(IR) {
//        browser()
//        binaries.executable()
//    }

    sourceSets {
//        val jsMain by getting {
//            dependencies {
//                implementation(project(":shared"))
//            }
//        }
    }
}

//compose.experimental {
//    web.application {
//
//    }
//}
