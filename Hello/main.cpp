#include <SDL/SDL.h>
#include<stdio.h>
#include <SDL.h>
int main ( int argc, char** argv )
{
    SDL_Init(SDL_INIT_VIDEO);
    //Create the window
    SDL_Surface *fenetre=NULL;
    fenetre=SDL_SetVideoMode(1000 , 1000, 32 , SDL_HWSURFACE);
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
