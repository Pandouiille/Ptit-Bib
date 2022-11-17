#include <iostream>
#include <stdio.h>
#include <stdlib.h>

#include "click.h"
#include "Intake.h"
#include "Shopping.h"

using namespace std;

#include "Button.h"

Click::Click()
{
	//NOT USE
}

Click::Click(SDL_Renderer* renderer)
{
	this->renderer = renderer;
	this->mouseX = 0;
	this->mouseY = 0;
	this->click = false;
}

Click::~Click()
{

}

void Click::EventManager() {
	SDL_Event event;
	Register intake;
	Shop shopping;

	while (SDL_PollEvent(&event)) {
		switch (event.type) {
		case SDL_QUIT:
			this->running = false;
			break;
		case SDL_MOUSEMOTION:
			SDL_GetMouseState(&mouseX, &mouseY);
			break;
		case SDL_MOUSEBUTTONDOWN:
			if (event.button.button == SDL_BUTTON_LEFT) this->click = true;
			break;
		case SDL_MOUSEBUTTONUP:
			if (event.button.button == SDL_BUTTON_LEFT) this->click = false;
			break;
		case SDL_KEYDOWN:
			switch (event.key.keysym.sym) {
			case SDLK_1:
				intake.Intake();
				break;
			case SDLK_2:
				shopping.Main();
			}
		}
	}

	for (auto i = 0; i < this->listButton.size(); i++)
	{
		this->listButton[i].handleEvents();
	}
}

void Click::render()
{
	for (auto i = 0; i < this->listButton.size(); i++)
	{
		this->listButton[i].render();
	}
	SDL_RenderPresent(this->renderer);
}

void Click::createButton(function<void()> onClick, int x, int y, int w, int h)
{
	this->listButton.push_back(Button::Button(this, onClick, x, y, w, h));
}