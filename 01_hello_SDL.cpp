#include <SDL2/SDL.h>
#include <stdio.h>

int main( int argc, char* args[] )
{
  SDL_Window* window = NULL;
  SDL_Surface* screenSurface = NULL;
  window = SDL_CreateWindow("Rectangle",0,0,640,480,SDL_WINDOW_SHOWN);
  screenSurface = SDL_GetWindowSurface(window);
  SDL_FillRect(screenSurface,NULL,SDL_MapRGB(screenSurface->format,0xFF,0xFF,0xFF));
  SDL_UpdateWindowSurface(window);
  SDL_Delay(5000);
  SDL_Quit();
  return 0;
}
