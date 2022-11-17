#pragma once
#include <SDL.h>
#include <vector>
#include <functional>

using namespace std;

class Button;

class Click {
private:
public:
	SDL_Renderer* renderer;
	Click(); // DO NOT USE
	Click(SDL_Renderer* renderer);
	~Click();

	bool running = true;
	void EventManager();
	void render();

	int mouseX, mouseY;
	bool click;

	vector<Button> listButton;
	void createButton(function<void()> onClick, int x, int y, int w, int h);
};