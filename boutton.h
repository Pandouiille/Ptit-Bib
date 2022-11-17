#pragma once
#include <SDL.h>
class boutton
{
public:
	SDL_Texture* tex;
	SDL_Rect srect, drect;
	bool isSelected = false;
	boutton();
	virtual ~boutton();
	//void update(Mouse&);
	//void draw();


};

