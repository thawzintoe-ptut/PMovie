package com.ptut.movie.data.remote

import com.ptut.movie.data.model.MovieItem
import com.ptut.movie.data.remote.api.PMovieApiImpl
import kotlinx.coroutines.flow.Flow
import kotlinx.coroutines.flow.flow

class PMovieDataSourceImpl : PMovieDataSource {
    private val apiImpl = PMovieApiImpl()
    override fun getPopularMovieList(page: Int): Flow<List<MovieItem>> {
        return flow {
            emit(apiImpl.popularMovieList(page).results)
        }
    }
}
