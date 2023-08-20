package com.ptut.movie.app.shared.ui.featurePopular

import androidx.compose.foundation.layout.fillMaxSize
import androidx.compose.foundation.layout.padding
import androidx.compose.material.icons.Icons
import androidx.compose.material.icons.rounded.Menu
import androidx.compose.material.icons.rounded.Person
import androidx.compose.material3.CenterAlignedTopAppBar
import androidx.compose.material3.ExperimentalMaterial3Api
import androidx.compose.material3.Icon
import androidx.compose.material3.IconButton
import androidx.compose.material3.MaterialTheme
import androidx.compose.material3.Scaffold
import androidx.compose.material3.Surface
import androidx.compose.material3.Text
import androidx.compose.runtime.Composable
import androidx.compose.runtime.collectAsState
import androidx.compose.runtime.getValue
import androidx.compose.ui.Modifier
import androidx.compose.ui.unit.dp
import com.ptut.movie.app.shared.SharedRes
import com.ptut.movie.app.shared.ui.components.MovieList
import com.ptut.movie.app.shared.ui.components.ProgressIndicator
import dev.icerock.moko.resources.compose.fontFamilyResource
import dev.icerock.moko.resources.compose.stringResource

@OptIn(ExperimentalMaterial3Api::class)
@Composable
fun PopularScreen(
    viewModel: PopularViewModel,
) {
    val popularUiState by viewModel.moveListState.collectAsState()
    Surface(
        modifier = Modifier.fillMaxSize(),
        color = MaterialTheme.colorScheme.background,
    ) {
        Scaffold(
            topBar = {
                CenterAlignedTopAppBar(
                    title = {
                        Text(
                            text = stringResource(SharedRes.strings.title_popular_movie),
                            style = MaterialTheme.typography.headlineSmall,
                            fontFamily = fontFamilyResource(SharedRes.fonts.Poppins.semiBold)
                        )
                    },
                    navigationIcon = {
                        IconButton(onClick = { /* doSomething() */ }) {
                            Icon(
                                imageVector = Icons.Rounded.Menu,
                                contentDescription = "Localized description"
                            )
                        }
                    },
                    actions = {
                        IconButton(onClick = { /* doSomething() */ }) {
                            Icon(
                                imageVector = Icons.Rounded.Person,
                                contentDescription = "Localized description"
                            )
                        }
                    },
                    modifier = Modifier,
                )
            },
        ) {
            when (popularUiState) {
                is PopularUiState.Loading -> {
                    ProgressIndicator()
                }
                is PopularUiState.Success -> {
                    MovieList(
                        listItems = (popularUiState as PopularUiState.Success).movieList,
                        modifier = Modifier.padding(it),
                        onclick = {}
                    )
                }
                is PopularUiState.Error -> {
                    Text(text = "Error")
                }
                else -> Unit
            }
        }
    }
}
