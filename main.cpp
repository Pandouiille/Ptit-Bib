/*This source code copyrighted by Lazy Foo' Productions (2004-2022)
and may not be redistributed without written permission.*/

//Using SDL, SDL_image, standard IO, math, and strings
#include <SDL.h>
#include <stdio.h>
#include <string>
#include <cmath>
#include <stdlib.h>
#include <iostream>
#include <SDL_ttf.h>

#include "click.h"
#include "Intake.h"
#include "text.h"
#include "Shopping.h"
#include "Menu.h"
#include "utilities.h"

using namespace std;

//Screen dimension constants
const int SCREEN_WIDTH = 640;
const int SCREEN_HEIGHT = 480;

int FPS = 60;


int main(int argc, char* args[])
{
	utilities utils;

	//Main loop flag
	bool quit = false;

	//The window we'll be rendering to
	SDL_Window* window = NULL;
	SDL_Renderer* renderer = NULL;

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
		window = SDL_CreateWindow("Le ptit bib", SDL_WINDOWPOS_UNDEFINED, SDL_WINDOWPOS_UNDEFINED, SCREEN_WIDTH, SCREEN_HEIGHT, SDL_WINDOW_SHOWN);
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
			SDL_SetRenderDrawColor(renderer, 0xFF00, 0xFF00, 0xFF00, 0xFF00);
			SDL_RenderClear(renderer);

			//Update screen
			SDL_UpdateWindowSurface(window);

		}
	}
	Click clik(renderer);

	clik.createButton([]() {cout << "ZIZI" << endl; }, 0, 0, 128, 128);
	clik.createButton([]() {cout << "CULCUL" << endl; }, 256, 256, 128, 128);
	clik.createButton([]() {cout << "fesses" << endl; }, 128, 128, 64, 64);

	//While application is running
	while (clik.running == true)
	{
		unsigned int frame = SDL_GetTicks() + FPS;
		utils.SDL_Limit_FPS(frame, FPS);
		clik.EventManager();
		clik.render();
	}
	return 0;
}