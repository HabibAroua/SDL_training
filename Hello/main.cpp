#include <SDL/SDL.h>
#include<stdio.h>
#include <SDL.h>
int main ( int argc, char** argv )
{
    SDL_Init(SDL_INIT_VIDEO);
    //Create the window
    SDL_Surface *fenetre=NULL;
    fenetre=SDL_SetVideoMode(500 , 500, 32 , SDL_HWSURFACE);
    while(1)
    {

    }
    SDL_FreeSurface(fenetre);
	//Quitter SDL
	SDL_Quit();
    return 0;
}
