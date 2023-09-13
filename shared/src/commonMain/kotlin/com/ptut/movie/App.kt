package com.ptut.movie

import androidx.compose.foundation.layout.Box
import androidx.compose.foundation.layout.fillMaxSize
import androidx.compose.foundation.layout.fillMaxWidth
import androidx.compose.foundation.layout.padding
import androidx.compose.material.icons.Icons
import androidx.compose.material.icons.rounded.Menu
import androidx.compose.material.icons.rounded.Person
import androidx.compose.material3.CenterAlignedTopAppBar
import androidx.compose.material3.ExperimentalMaterial3Api
import androidx.compose.material3.Icon
import androidx.compose.material3.IconButton
import androidx.compose.material3.MaterialTheme
import androidx.compose.material3.NavigationBar
import androidx.compose.material3.Scaffold
import androidx.compose.material3.Surface
import androidx.compose.material3.Text
import androidx.compose.runtime.Composable
import androidx.compose.ui.Modifier
import cafe.adriel.voyager.navigator.tab.CurrentTab
import cafe.adriel.voyager.navigator.tab.TabNavigator
import com.ptut.movie.app.shared.ui.feature.favorite.FavoriteScreen
import com.ptut.movie.app.shared.ui.feature.home.HomeScreen
import com.ptut.movie.app.shared.ui.feature.setting.SettingScreen
import com.ptut.movie.ui.components.TabNavigationItem
import dev.icerock.moko.resources.compose.fontFamilyResource

@OptIn(ExperimentalMaterial3Api::class)
@Composable
fun App() {
    MaterialTheme {
        Surface(
            modifier = Modifier.fillMaxSize(),
            color = MaterialTheme.colorScheme.background,
        ) {
            TabNavigator(HomeScreen) {
                Scaffold(
                    topBar = {
                        CenterAlignedTopAppBar(
                            title = {
                                Text(
                                    text = it.current.options.title,
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
                    bottomBar = {
                        NavigationBar(
                            containerColor = MaterialTheme.colorScheme.secondaryContainer,
                            modifier = Modifier.fillMaxWidth(),
                            content = {
                                TabNavigationItem(tab = HomeScreen)
                                TabNavigationItem(tab = FavoriteScreen)
                                TabNavigationItem(tab = SettingScreen)
                            }
                        )
                    }
                ) {
                    Box(
                        modifier = Modifier.fillMaxSize()
                            .padding(it)
                    ) {
                        CurrentTab()
                    }
                }
            }
        }
    }
}
