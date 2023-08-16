import androidx.compose.ui.window.Window
import androidx.compose.ui.window.application
import com.ptut.movie.app.shared.App

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
