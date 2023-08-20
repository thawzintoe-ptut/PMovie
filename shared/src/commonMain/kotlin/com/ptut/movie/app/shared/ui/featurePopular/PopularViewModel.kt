package com.ptut.movie.app.shared.ui.featurePopular

import com.ptut.movie.app.shared.data.model.MovieItem
import com.ptut.movie.app.shared.domain.GetPopularMovie
import dev.icerock.moko.mvvm.viewmodel.ViewModel
import kotlinx.coroutines.flow.SharingStarted
import kotlinx.coroutines.flow.catch
import kotlinx.coroutines.flow.map
import kotlinx.coroutines.flow.stateIn

class PopularViewModel : ViewModel() {
    private val getPopularMovie = GetPopularMovie().invoke(1)

    val moveListState = getPopularMovie
        .map {
            if (it.isEmpty()) {
                PopularUiState.Empty
            } else {
                PopularUiState.Success(it)
            }
        }
        .catch {
            PopularUiState.Error(it)
        }
        .stateIn(
            viewModelScope,
            SharingStarted.WhileSubscribed(500L),
            PopularUiState.Loading
        )
}

sealed class PopularUiState {
    object Loading : PopularUiState()
    object Empty : PopularUiState()
    data class Error(val exception: Throwable) : PopularUiState()
    data class Success(val movieList: List<MovieItem>) : PopularUiState()
}
