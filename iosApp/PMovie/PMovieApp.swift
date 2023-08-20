//
//  PMovieApp.swift
//  PMovie
//
//  Created by Thaw Zin Toe on 15/8/2566 BE.
//
import UIKit
import SwiftUI
import shared

@main
struct PMovieApp: App {
    var body: some Scene {
            WindowGroup {
                ContentView()
            }
        }
}

struct ComposeView: UIViewControllerRepresentable {
    func makeUIViewController(context: Context) -> UIViewController {
        MainKt.MainViewController()
    }

    func updateUIViewController(_ uiViewController: UIViewController, context: Context) {}
}

struct ContentView: View {
    var body: some View {
        ComposeView()
                .ignoresSafeArea(.keyboard) // Compose has own keyboard handler
    }
}
