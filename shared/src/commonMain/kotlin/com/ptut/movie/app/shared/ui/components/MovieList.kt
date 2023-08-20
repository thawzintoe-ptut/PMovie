package com.ptut.movie.app.shared.ui.components

import androidx.compose.foundation.layout.BoxWithConstraints
import androidx.compose.foundation.layout.padding
import androidx.compose.foundation.lazy.grid.GridCells
import androidx.compose.foundation.lazy.grid.LazyVerticalGrid
import androidx.compose.foundation.lazy.grid.items
import androidx.compose.runtime.Composable
import androidx.compose.ui.Modifier
import androidx.compose.ui.unit.dp
import com.ptut.movie.app.shared.data.MovieItem

@Composable
internal fun MovieList(
    modifier: Modifier = Modifier,
    listItems: List<MovieItem>,
    onclick: (id: Int) -> Unit
) {
    BoxWithConstraints(modifier = modifier) {
        val count = when (maxWidth) {
            in 0.dp..200.dp -> 1
            in 300.dp..600.dp -> 2
            in 600.dp..800.dp -> 3
            in 800.dp..1000.dp -> 4
            else -> 5
        }
        LazyVerticalGrid(
            columns = GridCells.Fixed(count),
            modifier = Modifier.padding(horizontal = 16.dp, vertical = 8.dp),
            userScrollEnabled = true,
            content = {
                items(listItems) { movieItem ->
                    with(movieItem) {
                        MovieView(
                            movieId = id,
                            moviePoster = movieItem.poster_path,
                            movieTitle = movieItem.title,
                            onClick = onclick,
                            modifier = Modifier.padding(
                                horizontal = 16.dp,
                                vertical = 8.dp
                            )
                        )
                    }
                }
            }
        )
    }
}
