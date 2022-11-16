#include <iostream>
#include <stdio.h>
#include <stdlib.h>

#include "click.h"

using namespace std;

void Click::EventManager() {
	int a = 1;
	SDL_Event event;
	SDL_PollEvent(&event);

	if (SDL_MOUSEBUTTONDOWN && a == 1) {
		cout << "test";
		a = 0;
	}

	else {
		cout << "non";
	}
}