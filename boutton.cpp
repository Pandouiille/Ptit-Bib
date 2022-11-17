#include "boutton.h"

boutton::boutton() {

	srect.h = 100;
	srect.w = 400;
	srect.x = 0;
}

boutton::~boutton(){}

/*void boutton::update(&Mouse mouse) {

	if (SDL_HasIntersection(&drect, &mouse.point)) {
		isSelected = true;
		srect.x 400;
	}
	else {
		isSelected = false;
	}

}

void boutton::draw() {

	SDL_RenderCopy(ren, tex, &srect, &drect);
}*/