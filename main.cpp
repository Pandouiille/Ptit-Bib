
#include <iostream>
#include <SDL.h>
#include <stdio.h>
#include <stdlib.h>

#undef main

#include "click.h"
#include "Intake.h"
#include "Shopping.h"
#include "window.h"
#include "Shopping.h"


#define WINDOWSIZE 600

SDL_Window* fenetre;
SDL_Renderer* renderer;

using namespace std;

int main(void)
{
    Shop shop;
    /*MainSDLWindow window;
    window.init("Ptit Bib'", SDL_WINDOWPOS_CENTERED, SDL_WINDOWPOS_CENTERED, WINDOWSIZE, WINDOWSIZE, 0);

	Click clik;
	Register intake;
	Shop shop;
	shop.Main();

    SDL_SetRenderDrawColor(window.getRenderer(), 0, 0, 0, SDL_ALPHA_OPAQUE);
    SDL_RenderClear(window.getRenderer());
    SDL_SetRenderDrawColor(window.getRenderer(), 255, 255, 255, SDL_ALPHA_OPAQUE);
    window.update();

    // Get the next event
    SDL_Event event;
    if (SDL_PollEvent(&event))
    {
        if (event.type == SDL_QUIT)
        {
            window.clean();
        }
    }
    SDL_Delay(3000); */
    shop.Main();

    return 0;
}


	
