#include <SDL2/SDL.h>
#include <stdio.h>

enum Conf {
	WIDTH = 960,
	HEIGHT = 640,
};

int main() {
	SDL_Window* win;
	SDL_Renderer* render;

	if (SDL_Init(SDL_INIT_EVERYTHING) != 0) {
		printf("sdl init fail \n");
		return 1;
	}

	if (!(win = SDL_CreateWindow("plane war", SDL_WINDOWPOS_CENTERED,
				     SDL_WINDOWPOS_CENTERED, WIDTH, HEIGHT,
				     SDL_WINDOW_OPENGL))) {
		printf("sdl create win fail \n");
		return 2;
	}

	if (!(render = SDL_CreateRenderer(
		  win, -1,
		  SDL_RENDERER_ACCELERATED | SDL_RENDERER_TARGETTEXTURE))) {
		printf("sdl create renderer fail \n");
		return 3;
	}

	SDL_SetRenderDrawColor(render, 0, 255, 0, 255);
	SDL_RenderClear(render);
	SDL_RenderPresent(render);

	SDL_Delay(5000);

	/* while (1) { */
	/* } */

	SDL_Quit();

	return 0;
}
