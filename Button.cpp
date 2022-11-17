#include "Button.h"

#include <iostream>
using namespace std;

Button::Button(Click* clik, function<void()> onClick, int x, int y, int w, int h)
	{
	this->onClick = onClick;
	
	this->rect.x = x;
	this->rect.y = y;
	this->rect.w = w;
	this->rect.h = h;

	this->clik = clik;
	this->renderer = clik->renderer;
}

Button::~Button()
{

}

void Button::handleEvents()
{
	if (this->clik->click)
	{
		if (this->clik->mouseX > this->rect.x && this->clik->mouseX < this->rect.x + this->rect.w
			&& this->clik->mouseY > this->rect.y && this->clik->mouseY < this->rect.y + this->rect.h)
			this->onClick();
	}
}

void Button::render()
{
	SDL_SetRenderDrawColor(this->renderer, 0xFF, 0x00, 0x00, 0xFF);
	SDL_RenderFillRect(this->renderer, &this->rect);
}