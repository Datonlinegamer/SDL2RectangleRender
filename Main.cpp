#include <iostream>
#include <SDL.h>
#include<stdlib.h>
int main(int argc, char* argv[])
{
    float Green = 500;
   
    SDL_Init(SDL_INIT_VIDEO);
    SDL_Window* window = SDL_CreateWindow("Jade's ShapeRend ", SDL_WINDOWPOS_UNDEFINED, SDL_WINDOWPOS_UNDEFINED, 640, 480, SDL_WINDOW_SHOWN);
    SDL_Renderer* Renderer = SDL_CreateRenderer(window, -1, SDL_RENDERER_ACCELERATED);

    
    SDL_Rect Rectangle = { 30, 30, 60, 100 };
    SDL_SetRenderDrawColor(Renderer, 0, Green, 0,0 );
    SDL_RenderFillRect(Renderer, &Rectangle);

   
    SDL_RenderPresent(Renderer);

   
    bool Running = true;
    while (Running) {
        SDL_Event Event;
        while (SDL_PollEvent(&Event)) {
            if (Event.type == SDL_QUIT) {
                Running = false;
            }
        }
    }

    
    SDL_DestroyRenderer(Renderer);
    SDL_DestroyWindow(window);
    SDL_Quit();
    return 0;
}






