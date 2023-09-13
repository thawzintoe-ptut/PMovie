package com.ptut.movie.data.repository

import com.ptut.movie.data.model.MovieItem
import com.ptut.movie.data.remote.PMovieDataSourceImpl
import com.ptut.movie.data.repository.PMovieRepository
import kotlinx.coroutines.flow.Flow

class PMovieRepositoryImpl : PMovieRepository {
    private val pMovieDataSourceImpl = PMovieDataSourceImpl()
    override fun getPopularMovieList(page: Int): Flow<List<MovieItem>> {
        return pMovieDataSourceImpl.getPopularMovieList(page)
    }
}
