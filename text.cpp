#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <SDL_ttf.h>

#include "text.h"

using namespace std;

TextManage::TextManage(SDL_Renderer* renderer, const char* fontPath)
{
	this ->renderer = renderer;
	TTF_Init();
	textFont = TTF_OpenFont(fontPath, 40);
	buttonFont = TTF_OpenFont(fontPath, 28);
}

TextManage::~TextManage()
{
	for (int i = 0; i < textureList.size(); i++) {
		SDL_DestroyTexture(textureList[i]);
	}
	TTF_CloseFont(this->textFont);
	TTF_CloseFont(this->buttonFont);
	TTF_Quit();
}

SDL_Texture* TextManage::Text(string txt, bool font, const char* color)
{
	TTF_Font* Font = buttonFont;
	if (font)
	{
		Font = textFont;
	}
	SDL_Color Color = black;
	if (color == "white")
	{
		Color = white;
	}

	SDL_Surface* surface = TTF_RenderText_Blended(Font, txt.c_str(), Color);
	SDL_Texture* texture = SDL_CreateTextureFromSurface(renderer, surface);

	textureList.push_back(texture);
	SDL_FreeSurface(surface);

	return texture;
}


/*void Text::Menu() {
	TTF_Init();
	TTF_Font* font = NULL;
	font = TTF_OpenFont("LEMONMILK-Light.ttf", 150);

	if (font != 0) {
		SDL_Color noir = { 255, 255, 255 }; //attention ce n'est pas un Uint32
		SDL_Surface* texte = TTF_RenderText_Blended(font, "coucou", noir);
		//affichage
	}
	else { cout << "foirage � l'ouverture de times.ttf" << endl; }
}*/