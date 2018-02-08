#include <SDL/SDL.h>
#include<stdio.h>
#include <SDL.h>

int main ( int argc, char** argv )
{
    SDL_Init(SDL_INIT_VIDEO);
    //Create the window
    SDL_Surface *fenetre=NULL;
    fenetre=SDL_SetVideoMode(500,500,32,SDL_HWSURFACE);
    //the color of the interface (red)
    SDL_FillRect(fenetre,NULL,SDL_MapRGB(fenetre->format,255,0,0));
    SDL_Flip(fenetre);
    //Boucle
    while(1)
    {
         SDL_Event event;
         SDL_WaitEvent(&event);
         if(event.type==SDL_QUIT)
         {
              break;
         }
    }
    //Free memorie
    SDL_FreeSurface(fenetre);
	//Quitter SDL
	SDL_Quit();
    return 0;
}
