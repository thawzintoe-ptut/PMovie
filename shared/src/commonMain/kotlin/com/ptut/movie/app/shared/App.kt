package com.ptut.movie.app.shared

import androidx.compose.material3.MaterialTheme
import androidx.compose.runtime.Composable
import com.ptut.movie.app.shared.ui.featurePopular.PopularScreen
import com.ptut.movie.app.shared.ui.featurePopular.PopularViewModel
import dev.icerock.moko.mvvm.compose.getViewModel
import dev.icerock.moko.mvvm.compose.viewModelFactory

@Composable
fun App() {
    MaterialTheme {
        val viewModel = getViewModel(Unit, viewModelFactory { PopularViewModel() })
        PopularScreen(viewModel)
    }
}




