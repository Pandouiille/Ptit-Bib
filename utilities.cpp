#include <stdlib.h>
#include "utilities.h"

void utilities::SDL_Limit_FPS(unsigned int limit, int FPS)
{
	unsigned int tick = SDL_GetTicks();
	if (limit < tick)
		return;
	else if (limit > tick + FPS)
		SDL_Delay(FPS);
	else
		SDL_Delay(limit - tick);
}
