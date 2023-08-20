package com.ptut.movie.app.shared.ui.featurePopular

import com.ptut.movie.app.shared.data.MovieItem
import dev.icerock.moko.mvvm.viewmodel.ViewModel
import kotlinx.coroutines.Dispatchers
import kotlinx.coroutines.flow.MutableStateFlow
import kotlinx.coroutines.flow.StateFlow
import kotlinx.coroutines.flow.asStateFlow
import kotlinx.coroutines.flow.getAndUpdate
import kotlinx.coroutines.flow.update
import kotlinx.coroutines.launch

class PopularViewModel : ViewModel() {
    private val _moveListState: MutableStateFlow<PopularUiState> = MutableStateFlow(PopularUiState.Loading)
    val moveListState: StateFlow<PopularUiState> = _moveListState.asStateFlow()
    private val movieList = (0..10).mapIndexed { index, i ->
        MovieItem.dummy
    }
    init {
        getPopularMovieList()
    }

    private fun getPopularMovieList() {
        _moveListState.update {
            PopularUiState.Success(movieList)
        }
    }


}

sealed class PopularUiState {
    object Loading : PopularUiState()
    object Empty : PopularUiState()
    data class Error(val exception: Exception) : PopularUiState()
    data class Success(val movieList: List<MovieItem>) : PopularUiState()
}
