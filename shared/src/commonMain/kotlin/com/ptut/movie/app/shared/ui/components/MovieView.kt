package com.ptut.movie.app.shared.ui.components

import androidx.compose.foundation.Image
import androidx.compose.foundation.clickable
import androidx.compose.foundation.layout.Column
import androidx.compose.foundation.layout.Spacer
import androidx.compose.foundation.layout.fillMaxSize
import androidx.compose.foundation.layout.fillMaxWidth
import androidx.compose.foundation.layout.padding
import androidx.compose.foundation.layout.size
import androidx.compose.foundation.shape.RoundedCornerShape
import androidx.compose.material3.Card
import androidx.compose.material3.ExperimentalMaterial3Api
import androidx.compose.material3.MaterialTheme
import androidx.compose.material3.Text
import androidx.compose.runtime.Composable
import androidx.compose.ui.Alignment
import androidx.compose.ui.Modifier
import androidx.compose.ui.layout.ContentScale
import androidx.compose.ui.unit.dp
import com.ptut.movie.app.shared.SharedRes
import com.ptut.movie.app.shared.utils.AppConstant
import com.seiko.imageloader.rememberAsyncImagePainter
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
                painter = rememberAsyncImagePainter(
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
                contentScale = ContentScale.Crop,
            )
            Spacer(Modifier.padding(8.dp))
            Text(
                text = movieTitle,
                modifier = Modifier
                    .fillMaxWidth()
                    .padding(horizontal = 8.dp),
                style = MaterialTheme.typography.bodySmall,
                fontFamily = fontFamilyResource(SharedRes.fonts.Poppins.medium),
                textAlign = androidx.compose.ui.text.style.TextAlign.Center,
                maxLines = 1
            )
            Spacer(Modifier.padding(8.dp))
        }
    }
}
