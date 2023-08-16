import androidx.compose.ui.window.Window
import com.ptut.movie.app.shared.App
import org.jetbrains.skiko.wasm.onWasmReady

fun main() {
    onWasmReady {
        Window("KmpApp") {
            App()
        }
    }
}
