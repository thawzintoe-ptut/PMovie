package com.ptut.movie.ui.components

import androidx.compose.foundation.layout.RowScope
import androidx.compose.material.icons.Icons
import androidx.compose.material.icons.rounded.Home
import androidx.compose.material3.Icon
import androidx.compose.material3.MaterialTheme
import androidx.compose.material3.NavigationBarItem
import androidx.compose.material3.Text
import androidx.compose.runtime.Composable
import androidx.compose.ui.graphics.vector.rememberVectorPainter
import cafe.adriel.voyager.navigator.tab.LocalTabNavigator
import cafe.adriel.voyager.navigator.tab.Tab
import com.ptut.movie.SharedRes
import dev.icerock.moko.resources.compose.fontFamilyResource

@Composable
fun RowScope.TabNavigationItem(
    tab: Tab
) {
    val tabNavigator = LocalTabNavigator.current
    val tabColor = if (tabNavigator.current == tab) {
        MaterialTheme.colorScheme.primary
    } else {
        MaterialTheme.colorScheme.onBackground
    }
    NavigationBarItem(
        selected = tabNavigator.current == tab,
        onClick = { tabNavigator.current = tab },
        icon = {
            Icon(
                painter = tab.options.icon ?: rememberVectorPainter(Icons.Rounded.Home),
                contentDescription = "Localized description",
                tint = tabColor
            )
        },
        label = {
            Text(
                text = tab.options.title,
                style = MaterialTheme.typography.bodySmall,
                fontFamily = fontFamilyResource(SharedRes.fonts.Poppins.medium),
                color = tabColor
            )
        }
    )
}
