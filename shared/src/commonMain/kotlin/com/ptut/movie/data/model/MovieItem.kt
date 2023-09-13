package com.ptut.movie.data.model

import kotlinx.serialization.Serializable

@Serializable
data class MovieItem(
    val adult: Boolean,
    val backdrop_path: String?,
    val genre_ids: List<Int>,
    val id: Int,
    val original_language: String,
    val original_title: String,
    val overview: String,
    val popularity: Double,
    val poster_path: String,
    val release_date: String,
    var title: String,
    val video: Boolean,
    val vote_average: Double,
    val vote_count: Int,
) {
    companion object {
        val dummy by lazy {
            MovieItem(
                adult = false,
                backdrop_path = null,
                genre_ids = listOf(),
                id = 5371,
                original_language = "scripserit",
                original_title = "omnesque",
                overview = "nulla",
                popularity = 4.5,
                poster_path = "mentitum",
                release_date = "suscipiantur",
                title = "mollis",
                video = false,
                vote_average = 6.7,
                vote_count = 4995
            )
        }
    }
}
