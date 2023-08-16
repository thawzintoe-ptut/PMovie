//
//  PMovieApp.swift
//  PMovie
//
//  Created by Thaw Zin Toe on 15/8/2566 BE.
//

import SwiftUI
import shared

@main
struct PMovieApp: App {
    var body: some Scene {
        WindowGroup {
            ComposeView()
        }
    }
}

struct ComposeView: UIViewControllerRepresentable {
    func makeUIViewController(context: Context) -> some UIViewController {
        return UIViewController()
    }
    
    func updateUIViewController(_ uiViewController: UIViewControllerType, context: Context) {
        
    }
}
