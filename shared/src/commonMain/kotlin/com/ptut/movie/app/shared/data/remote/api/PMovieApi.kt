package com.ptut.movie.app.shared.data.remote.api

import com.ptut.movie.app.shared.data.model.request.MoviesResponse

interface PMovieApi {
    suspend fun popularMovieList(
        page: Int
    ): MoviesResponse
}
