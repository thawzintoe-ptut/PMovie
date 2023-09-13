package com.ptut.movie.domain

import com.ptut.movie.data.model.MovieItem
import com.ptut.movie.data.repository.PMovieRepositoryImpl
import kotlinx.coroutines.flow.Flow

class GetPopularMovie {
    private val pMovieRepositoryImpl = PMovieRepositoryImpl()
    operator fun invoke(page: Int): Flow<List<MovieItem>> = pMovieRepositoryImpl.getPopularMovieList(page)
}
