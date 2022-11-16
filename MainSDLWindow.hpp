#pragma once
#include <SDL.h>
#include <stdio.h>
#include <stdlib.h>

class MainSDLWindow {
public:
	MainSDLWindow();
	~MainSDLWindow();
	SDL_Renderer* GetRenderer();
	int Init(const char* winname, int width_, int height_);
	int redCross(void);

private:
	SDL_Renderer* renderer;
	SDL_Window* window;
};