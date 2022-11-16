
#include <iostream>
#include "MainSDLWindow.hpp"
#include <SDL.h>
#include <stdio.h>
#include <stdlib.h>

#undef main

#include "click.h"
#include "Intake.h"
#include "Shopping.h"

#define WIDTHGAME 540
#define HEIGHTWINDOW 630

SDL_Window* fenetre;
SDL_Renderer* renderer;

using namespace std;

int main(int argc, char* argv[])
{
	/*Click clik;
	Register intake;
	Shop shop;
	shop.Main();*/

    SDL_Window* fenetre;  // Déclaration de la fenêtre

    if (SDL_Init(SDL_INIT_VIDEO) < 0)  // initialisation de la SDL
    {
        printf("Erreur d'initialisation de la SDL : %s", SDL_GetError());
        return EXIT_FAILURE;
    }

    fenetre = SDL_CreateWindow("Une fenetre SDL", SDL_WINDOWPOS_CENTERED, SDL_WINDOWPOS_CENTERED, WIDTHGAME, HEIGHTWINDOW, SDL_WINDOW_RESIZABLE);  // Création de la fenêtre

    if (fenetre == NULL)  //gestion des erreurs
    {
        printf("Erreur lors de la creation d'une fenetre : %s", SDL_GetError());
        return EXIT_FAILURE;
    }

    if (renderer == NULL)//gestion des erreurs
    {
        printf("Erreur lors de la creation d'un renderer : %s", SDL_GetError());
        return EXIT_FAILURE;
    }

    SDL_Delay(3000);  //pause de 3 secondes

    SDL_DestroyRenderer(renderer);
    SDL_DestroyWindow(fenetre);
    SDL_Quit();  //on quitte la SDL
    return 0;
}


	
