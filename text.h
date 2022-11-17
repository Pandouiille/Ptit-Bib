#pragma once
#include <SDL.h>
#include <SDL_ttf.h>
#include <string>
#include <vector>

using namespace std;

class TextManage
{
private:
	SDL_Renderer* renderer;

	TTF_Font* textFont;
	TTF_Font* buttonFont;

	vector<SDL_Texture*> textureList;

	SDL_Color white = { 255, 255, 255 };
	SDL_Color black = { 0, 0, 0 };

public:
	TextManage(SDL_Renderer* renderer, const char* fontPath);
	~TextManage();

	SDL_Texture* Text(string txt, 
		bool font = false, 
		const char* color = "black");

	void Menu();
};
