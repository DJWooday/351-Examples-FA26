#include <SDL.h>
#include <cstdio>
#include <iostream>

//#include "cmake-build-debug/_deps/sdl2-src/src/dynapi/SDL_dynapi_overrides.h"

// Purpose of this file: verify the toolchain end-to-end (compiler, linker,
// SDL2) BEFORE we add image loading and pixel manipulation on top.
// If this window opens and closes cleanly, your CMake setup is good.

int main(int argc, char* argv[]) {
    int arr[] = {1, 22, 3};
    int* p = arr;
    std::cout << *(p+1) << std::endl;

    for (int i = 0; i < 1000000000; i++) {}

    // SDL_image, audio, etc. aren't needed yet -- just the video subsystem.
    if (SDL_Init(SDL_INIT_VIDEO) != 0) {
        std::fprintf(stderr, "SDL_Init failed: %s\n", SDL_GetError());
        return 1;
    }

    SDL_Window* window = SDL_CreateWindow(
        "Image Smoothing - Smoke Test",
        SDL_WINDOWPOS_CENTERED, SDL_WINDOWPOS_CENTERED,
        800, 600,
        SDL_WINDOW_SHOWN
    );

    if (!window) {
        std::fprintf(stderr, "SDL_CreateWindow failed: %s\n", SDL_GetError());
        SDL_Quit();
        return 1;
    }

    // SDL_RENDERER_ACCELERATED asks SDL to use the GPU (via whatever
    // backend it picks per-OS: Direct3D on Windows, Metal on Mac,
    // OpenGL/Vulkan on Linux). This abstraction is exactly why SDL2
    // works identically across all three OSs without students touching
    // platform-specific graphics code.
    SDL_Renderer* renderer = SDL_CreateRenderer(
        window, -1, SDL_RENDERER_ACCELERATED
    );

    if (!renderer) {
        std::fprintf(stderr, "SDL_CreateRenderer failed: %s\n", SDL_GetError());
        SDL_DestroyWindow(window);
        SDL_Quit();
        return 1;
    }

    bool running = true;
    SDL_Event event;

    while (running) {
        // Drain all pending events every frame. Without this loop the OS
        // will think the app has hung (no response to clicks/moves/close).
        while (SDL_PollEvent(&event)) {
            if (event.type == SDL_QUIT) {
                running = false;
            }
            // ESC as a convenience quit key during development.
            if (event.type == SDL_KEYDOWN && event.key.keysym.sym == SDLK_ESCAPE) {
                running = false;
            }
        }

        // Clear to a dark slate color so we can visually confirm the
        // render loop is alive (vs. a black window, which could just as
        // easily mean "nothing is drawing").
        SDL_SetRenderDrawColor(renderer, 30, 30, 40, 255);
        SDL_RenderClear(renderer);

        SDL_RenderPresent(renderer);
    }

    SDL_DestroyRenderer(renderer);
    SDL_DestroyWindow(window);
    SDL_Quit();

    return 0;
}