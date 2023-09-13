package com.ptut.movie.data.repository

import com.ptut.movie.data.model.MovieItem
import kotlinx.coroutines.flow.Flow

interface PMovieRepository {
    fun getPopularMovieList(
        page: Int
    ): Flow<List<MovieItem>>
}