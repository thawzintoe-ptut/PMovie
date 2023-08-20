package com.ptut.movie.app.shared.data.repository

import com.ptut.movie.app.shared.data.model.MovieItem
import kotlinx.coroutines.flow.Flow

interface PMovieRepository {
    fun getPopularMovieList(
        page: Int
    ): Flow<List<MovieItem>>
}