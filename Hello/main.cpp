#include <SDL/SDL.h>
#include<stdio.h>
int main ( int argc, char** argv )
{
    if (SDL_Init( SDL_INIT_EVERYTHING ) !=0)
    {
        printf("Error %s \n",SDL_GetError());
    }
    else
    {
        printf("Succesful \n");
    }

	//Quitter SDL
	SDL_Quit();
    return 0;
}
