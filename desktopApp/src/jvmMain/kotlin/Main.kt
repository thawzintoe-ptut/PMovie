import androidx.compose.ui.window.Window
import androidx.compose.ui.window.application
import com.ptut.movie.App

fun main() {
    application {
        Window(
            title = "PMovie",
            onCloseRequest = ::exitApplication,
        ) {
            App()
        }
    }
}
