package com.ptut.movie.app.shared.ui.feature.setting

import androidx.compose.material.icons.Icons
import androidx.compose.material.icons.filled.Settings
import androidx.compose.runtime.Composable
import androidx.compose.runtime.remember
import androidx.compose.ui.graphics.vector.rememberVectorPainter
import cafe.adriel.voyager.navigator.Navigator
import cafe.adriel.voyager.navigator.tab.Tab
import cafe.adriel.voyager.navigator.tab.TabOptions
import com.ptut.movie.app.shared.ui.feature.popular.PopularScreen

internal object SettingScreen : Tab {
    override val options: TabOptions
        @Composable
        get() {
            val title = "Setting"
            val icon = rememberVectorPainter(Icons.Filled.Settings)

            return remember {
                TabOptions(
                    index = 0u,
                    title = title,
                    icon = icon
                )
            }
        }

    @Composable
    override fun Content() {
        Navigator(
            PopularScreen()
        )
    }
}
