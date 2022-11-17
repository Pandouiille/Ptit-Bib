#include "MainSDLWindow.hpp"
#include <SDL.h>
#include <stdio.h>

//Screen dimension constants
const int SCREEN_WIDTH = 540;
const int SCREEN_HEIGHT = 630;

SDL_Renderer* MainSDLWindow::GetRenderer() {
	return this->renderer;
}

int MainSDLWindow::sdl()
{
	//The window we'll be rendering to
	SDL_Window *window = NULL;
	SDL_Renderer *renderer = NULL;

	//The surface contained by the window
	SDL_Surface* screenSurface = NULL;

	//Initialize SDL
	if (SDL_Init(SDL_INIT_VIDEO) < 0)
	{
		printf("SDL could not initialize! SDL_Error: %s\n", SDL_GetError());
	}
	else
	{
		//Create window
		window = SDL_CreateWindow("SDL Tutorial", SDL_WINDOWPOS_UNDEFINED, SDL_WINDOWPOS_UNDEFINED, SCREEN_WIDTH, SCREEN_HEIGHT, SDL_WINDOW_SHOWN);
		if (window == NULL)
		{
			printf("Window could not be created! SDL_Error: %s\n", SDL_GetError());
		}

		else
		{
			renderer = SDL_CreateRenderer(window, -1, SDL_RENDERER_ACCELERATED);
			if (renderer == NULL)
			{
				printf("Renderer could not be created! SDL Error: %s\n", SDL_GetError());
			}

			//Clear screen
			SDL_SetRenderDrawColor(renderer, 0xFF, 0xFF, 0xFF, 0xFF);
			SDL_RenderClear(renderer);

			//Render red filled quad
			SDL_Rect fillRect = { SCREEN_WIDTH / 4, SCREEN_HEIGHT / 4, SCREEN_WIDTH / 2, SCREEN_HEIGHT / 2 };
			SDL_SetRenderDrawColor(renderer, 0xFF, 0x00, 0x00, 0xFF);
			SDL_RenderFillRect(renderer, &fillRect);

			//Update screen
			SDL_RenderPresent(renderer);

			SDL_UpdateWindowSurface(window);
			//Hack to get window to stay up
		}
	}
	return 0;
}
