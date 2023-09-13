package com.ptut.movie.app.shared.ui.feature.popular

import androidx.compose.material3.Text
import androidx.compose.runtime.Composable
import androidx.compose.runtime.collectAsState
import androidx.compose.runtime.getValue
import androidx.compose.ui.Modifier
import cafe.adriel.voyager.core.screen.Screen
import com.ptut.movie.ui.components.MovieList
import com.ptut.movie.ui.components.ProgressIndicator
import dev.icerock.moko.mvvm.compose.getViewModel
import dev.icerock.moko.mvvm.compose.viewModelFactory

class PopularScreen() : Screen {
    @Composable
    override fun Content() {
        val viewModel = getViewModel(Unit, viewModelFactory { PopularViewModel() })
        PopularScreen(viewModel)
    }
}

@Composable
fun PopularScreen(
    viewModel: PopularViewModel
) {
    val popularUiState by viewModel.moveListState.collectAsState()
    when (popularUiState) {
        is PopularUiState.Loading -> {
            ProgressIndicator()
        }
        is PopularUiState.Success -> {
            MovieList(
                listItems = (popularUiState as PopularUiState.Success).movieList,
                modifier = Modifier,
                onclick = {}
            )
        }
        is PopularUiState.Error -> {
            Text(text = "Error")
        }
        else -> Unit
    }
}
