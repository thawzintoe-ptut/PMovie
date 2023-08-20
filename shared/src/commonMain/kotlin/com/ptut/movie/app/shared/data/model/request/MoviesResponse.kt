package com.ptut.movie.app.shared.data.model.request

import com.ptut.movie.app.shared.data.model.MovieItem
import kotlinx.serialization.Serializable

@Serializable
data class MoviesResponse(
    val page: Int,
    val results: List<MovieItem>,
    val total_pages: Int,
    val total_results: Int
)