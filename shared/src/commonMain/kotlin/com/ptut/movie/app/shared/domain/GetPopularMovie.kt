package com.ptut.movie.app.shared.domain

import com.ptut.movie.app.shared.data.model.MovieItem
import com.ptut.movie.app.shared.data.repository.PMovieRepositoryImpl
import kotlinx.coroutines.flow.Flow

class GetPopularMovie {
    private val pMovieRepositoryImpl = PMovieRepositoryImpl()
    operator fun invoke(page: Int): Flow<List<MovieItem>> = pMovieRepositoryImpl.getPopularMovieList(page)
}
