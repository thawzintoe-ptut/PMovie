package com.ptut.movie.app.shared.data.repository

import com.ptut.movie.app.shared.data.model.MovieItem
import com.ptut.movie.app.shared.data.remote.PMovieDataSourceImpl
import kotlinx.coroutines.flow.Flow

class PMovieRepositoryImpl : PMovieRepository {
    private val pMovieDataSourceImpl = PMovieDataSourceImpl()
    override fun getPopularMovieList(page: Int): Flow<List<MovieItem>> {
        return pMovieDataSourceImpl.getPopularMovieList(page)
    }
}
