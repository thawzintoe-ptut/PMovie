package com.ptut.movie.data.remote.api

import com.ptut.movie.data.remote.KtorClient
import com.ptut.movie.data.model.request.MoviesResponse
import io.ktor.client.call.body
import io.ktor.client.request.HttpRequestBuilder
import io.ktor.client.request.get
import io.ktor.http.encodedPath

class PMovieApiImpl : PMovieApi {
    val client = KtorClient.getKtorClient()
    private fun HttpRequestBuilder.popularMovie(
        page: Int
    ) {
        url {
            encodedPath = "3/movie/popular"
            parameters.append("page", page.toString())
        }
    }
    override suspend fun popularMovieList(page: Int): MoviesResponse {
        return client.get {
            popularMovie(page)
        }.body()
    }
}
