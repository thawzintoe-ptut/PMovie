package com.ptut.movie.data.remote.api

import com.ptut.movie.data.model.request.MoviesResponse

interface PMovieApi {
    suspend fun popularMovieList(
        page: Int
    ): MoviesResponse
}
