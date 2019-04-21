#include <stdio.h>
#include <stdlib.h>

#include <SDL.h>
#include <SDL_image.h>
#include <SDL_ttf.h>
#include <SDL_mixer.h>
#include <stdio.h>
#include "Game.h"

int init(char *title, int xpos,int ypos,int height, int width,int flags,game *myGame, font *mFont){


    //initialize SDL

    if(SDL_Init(SDL_INIT_EVERYTHING)>=0)
    {
            //creation de la fenetre
            myGame->g_pWindow=SDL_CreateWindow(title,xpos,ypos,height,width,flags);
            //creation render
            if(myGame->g_pWindow!=NULL){
                myGame->g_pRenderer=SDL_CreateRenderer(myGame->g_pWindow,-1,SDL_RENDERER_ACCELERATED);

            }

    }else{


        return 0;
    }

    if(TTF_Init() == -1)
    {
        fprintf(stderr, "Erreur d'initialisation de TTF_Init : %s\n", TTF_GetError());
        exit(EXIT_FAILURE);
    }

    mFont->g_font=TTF_OpenFont("./Fonts/verdana.ttf",65);

    if(!mFont->g_font) {
        printf("TTF_OpenFont: %s\n", TTF_GetError());
        SDL_Delay(5000);
        exit(EXIT_FAILURE);
    }

//     SDL_Color fontColor={255,0,0};

//     myGame->g_surface=TTF_RenderText_Blended(mFont->g_font, "Lake View Hotel", fontColor);//Charge la police

    if(Mix_OpenAudio(44100, MIX_DEFAULT_FORMAT, MIX_DEFAULT_CHANNELS, 1024) == -1) //Initialisation de l'API Mixer
    {
       printf("%s", Mix_GetError());
    }

    return 1;


}
