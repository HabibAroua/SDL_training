#include <stdio.h>
#include <stdlib.h>
#include "SDL/SDL.h"

int main(int argc, char *argv[])
{
    SDL_version nb;
    SDL_VERSION(&nb);
    printf("Bonjour sur le SDL %d %d %d ! \n",nb.major,nb.minor,nb.patch);
    return 0;
}
