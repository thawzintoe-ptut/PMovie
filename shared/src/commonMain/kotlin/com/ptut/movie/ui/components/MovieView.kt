package com.ptut.movie.ui.components

import androidx.compose.foundation.Image
import androidx.compose.foundation.clickable
import androidx.compose.foundation.layout.Arrangement
import androidx.compose.foundation.layout.Column
import androidx.compose.foundation.layout.Row
import androidx.compose.foundation.layout.Spacer
import androidx.compose.foundation.layout.fillMaxSize
import androidx.compose.foundation.layout.fillMaxWidth
import androidx.compose.foundation.layout.padding
import androidx.compose.foundation.layout.size
import androidx.compose.foundation.shape.RoundedCornerShape
import androidx.compose.material.icons.Icons
import androidx.compose.material.icons.filled.Star
import androidx.compose.material3.Card
import androidx.compose.material3.ExperimentalMaterial3Api
import androidx.compose.material3.Icon
import androidx.compose.material3.MaterialTheme
import androidx.compose.material3.Text
import androidx.compose.runtime.Composable
import androidx.compose.ui.Alignment
import androidx.compose.ui.Modifier
import androidx.compose.ui.graphics.Color
import androidx.compose.ui.layout.ContentScale
import androidx.compose.ui.text.TextStyle
import androidx.compose.ui.text.font.FontWeight
import androidx.compose.ui.text.style.TextAlign
import androidx.compose.ui.unit.dp
import androidx.compose.ui.unit.sp
import com.ptut.movie.SharedRes
import com.ptut.movie.utils.AppConstant
import com.seiko.imageloader.rememberImagePainter
import dev.icerock.moko.resources.compose.fontFamilyResource

@OptIn(ExperimentalMaterial3Api::class)
@Composable
fun MovieView(
    movieId: Int,
    moviePoster: String,
    movieTitle: String,
    onClick: (Int) -> Unit,
    modifier: Modifier = Modifier,
) {
    Card(
        onClick = { onClick.invoke(movieId) },
        modifier = modifier,
    ) {
        Column(
            modifier = Modifier.fillMaxSize()
                .align(Alignment.CenterHorizontally)
        ) {
            Image(
                painter = rememberImagePainter(
                    AppConstant.IMAGE_URL.plus(
                        moviePoster
                    )
                ),
                contentDescription = moviePoster,
                modifier = Modifier.fillMaxWidth()
                    .size(150.dp)
                    .shimmerBackground(
                        RoundedCornerShape(2.dp)
                    ).clickable {
                        onClick.invoke(movieId)
                    },
                contentScale = ContentScale.FillBounds
            )
            Spacer(Modifier.padding(8.dp))
            Column(
                verticalArrangement = Arrangement.spacedBy(8.dp, Alignment.Top),
                horizontalAlignment = Alignment.Start,
                modifier = Modifier.padding(horizontal = 8.dp)
            ) {
                Text(
                    text = movieTitle,
                    modifier = Modifier
                        .fillMaxWidth()
                        .padding(horizontal = 8.dp),
                    style = MaterialTheme.typography.bodySmall,
                    fontFamily = fontFamilyResource(SharedRes.fonts.Poppins.medium),
                    textAlign = TextAlign.Start,
                    maxLines = 1
                )
                Row(
                    horizontalArrangement = Arrangement.spacedBy(4.dp, Alignment.Start),
                    verticalAlignment = Alignment.CenterVertically,
                    modifier = Modifier.padding(bottom = 8.dp)
                ) {
                    Icon(
                        imageVector = Icons.Filled.Star,
                        contentDescription = "image description",
                        tint = MaterialTheme.colorScheme.primary,
                        modifier = Modifier.size(12.dp)
                    )
                    Text(
                        text = "9.1/10 IMDb",
                        style = TextStyle(
                            fontSize = 12.sp,
                            fontFamily = fontFamilyResource(SharedRes.fonts.Poppins.light),
                            fontWeight = FontWeight(400),
                            color = Color(0xFF9C9C9C),
                            letterSpacing = 0.24.sp
                        )
                    )
                }
            }
        }
    }
}
