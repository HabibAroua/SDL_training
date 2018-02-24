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
    SDL_FillRect(carreVert,NULL,red);
    SDL_Rect carreVertPoisition;
    carreVertPoisition.x=250;
    carreVertPoisition.y=0;
    SDL_BlitSurface(carreVert,NULL,fenetre,&carreVertPoisition);
    SDL_Flip(fenetre);
    //Create other surface
    SDL_Surface *carreBlue;
    carreBlue=SDL_CreateRGBSurface(SDL_HWACCEL,50,50,32,0,0,0,0);
    SDL_FillRect(carreBlue,NULL,blue);
    SDL_Rect carreVertPoisition1;
    carreVertPoisition1.x=250;
    carreVertPoisition1.y=150;
    SDL_BlitSurface(carreBlue,NULL,fenetre,&carreVertPoisition1);
    SDL_Flip(fenetre);
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
