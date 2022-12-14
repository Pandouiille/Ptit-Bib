#include <SDL.h>
#include <stdio.h>
#include <stdlib.h>
#include "window.h"


MainSDLWindow::MainSDLWindow()
{}

MainSDLWindow::~MainSDLWindow()
{}


int MainSDLWindow::init(const char* title, int x, int y, int width, int height, int a)
{

    if (SDL_VideoInit(NULL) < 0)
    {
        printf("Fail :%s", SDL_GetError());
        return EXIT_FAILURE;
    }

    // Cr?ation de la fen?tre :
    window = SDL_CreateWindow(title, x, y, width, height, a);
    if (window == NULL)
    {
        printf("Erreur lors de la creation d'une fenetre : %s", SDL_GetError());
        return EXIT_FAILURE;
    }
    // cr?ation du renderer
    renderer = SDL_CreateRenderer(window, -1, SDL_RENDERER_ACCELERATED | SDL_RENDERER_PRESENTVSYNC);
    if (renderer == NULL)
    {
        printf("Erreur lors de la creation d'un renderer : %s", SDL_GetError());
        return EXIT_FAILURE;
    }
    return isRunning = true;
}


void MainSDLWindow::update()
{
    SDL_RenderPresent(renderer);
}


void MainSDLWindow::clean()
{

    SDL_DestroyRenderer(renderer);
    SDL_DestroyWindow(window);

    SDL_Quit();
}

SDL_Renderer* MainSDLWindow::getRenderer()
{
    return renderer;
}

bool MainSDLWindow::running()
{
    return isRunning;
}