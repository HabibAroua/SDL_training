#include <SDL/SDL.h>
#include<stdio.h>
#include <SDL.h>
#include <iostream>

using namespace std;
int main ( int argc, char** argv )
{
    SDL_Init(SDL_INIT_VIDEO);
    //Create the window
    SDL_Surface *fenetre=NULL;
    fenetre=SDL_SetVideoMode(500,500,32,SDL_HWSURFACE);
    //Decalre color
    Uint32 red,blue,green;
    red=SDL_MapRGB(fenetre->format,255,0,0);
    blue=SDL_MapRGB(fenetre->format,0,0,255);
    green=SDL_MapRGB(fenetre->format,0,255,0);
    //the color of the interface
    SDL_FillRect(fenetre,NULL,green);
    SDL_Flip(fenetre);
    //Create new surface
    SDL_Surface *carreVert;
    carreVert=SDL_CreateRGBSurface(SDL_HWACCEL,50,50,32,0,0,0,0);
    SDL_FillRect(fenetre,NULL,red);
    SDL_Rect carreVertPoisition;
    carreVertPoisition.x=0;
    carreVertPoisition.y=50;
    SDL_BlitSurface(carreVert,NULL,fenetre,&carreVertPoisition);
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
    cout <<"Hello world "<<endl;
    return 0;
}
