package com.ptut.movie.app.shared.data.remote

import com.ptut.movie.app.shared.data.model.MovieItem
import kotlinx.coroutines.flow.Flow

interface PMovieDataSource {
    fun getPopularMovieList(
        page: Int
    ): Flow<List<MovieItem>>
}
