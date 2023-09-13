package com.ptut.movie.data.remote

import com.ptut.movie.data.model.MovieItem
import kotlinx.coroutines.flow.Flow

interface PMovieDataSource {
    fun getPopularMovieList(
        page: Int
    ): Flow<List<MovieItem>>
}
