#pragma once
#include <SDL.h>
#include <stdio.h>
#include <stdlib.h>

class MainSDLWindow {
public:
	int sdl();
	SDL_Renderer* GetRenderer();

private:
	SDL_Renderer* renderer;
};