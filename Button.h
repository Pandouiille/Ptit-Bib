#pragma once

#include <SDL.h>
#include <functional>
#include "click.h"

class Button
{
private:
	SDL_Renderer* renderer;
public:
	Click* clik;
	SDL_Rect rect;

	function<void()> onClick = [] {};

	Button(Click* clik, function<void()> onClick, int x, int y, int w, int h);
	~Button();

	void handleEvents();

	void render();
};

