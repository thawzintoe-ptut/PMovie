package com.ptut.movie.app.shared

import dev.icerock.moko.mvvm.viewmodel.ViewModel
import kotlinx.coroutines.flow.MutableStateFlow
import kotlinx.coroutines.flow.StateFlow
import kotlinx.coroutines.flow.asStateFlow
import kotlinx.coroutines.flow.update

class SimpleViewModel : ViewModel() {
    private val _counter: MutableStateFlow<Int> = MutableStateFlow(0)
    val counter: StateFlow<Int> = _counter.asStateFlow()

    fun onCounterButtonPressed() {
        val current = _counter.value
        _counter.update { current + 1 }
    }
}
