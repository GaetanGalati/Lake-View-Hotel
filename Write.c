#include <stdio.h>
#include <stdlib.h>

#include <SDL.h>
#include <SDL_image.h>
#include <SDL_ttf.h>
#include <SDL_mixer.h>
#include <stdio.h>
#include "Game.h"
#define TAILLE 20

void writeSDL(game *myGame,font mFont) {

        if(myGame->g_surface){


                SDL_Rect rectangle;
                rectangle.x=SCREEN_WIDTH/2-300;//debut x
                rectangle.y=0;//debut y
                rectangle.w=0; //Largeur
                rectangle.h=0; //Hauteur


                 myGame->g_texture = SDL_CreateTextureFromSurface(myGame->g_pRenderer,myGame->g_surface); // Préparation de la texture pour la chaine
                // Libération de la ressource occupée par le sprite
                if(!myGame->g_surface)
                    SDL_FreeSurface(myGame->g_surface);


                 if(myGame->g_texture){

                        SDL_RenderCopy(myGame->g_pRenderer,myGame->g_texture,NULL,&rectangle); // Copie du sprite grâce au SDL_Renderer
                        SDL_RenderPresent(myGame->g_pRenderer); // Affichage
                 }
                 else{
                        fprintf(stdout,"Échec de création de la texture (%s)\n",SDL_GetError());
                }



        }else{
            fprintf(stdout,"Échec de creation surface pour chaine (%s)\n",SDL_GetError());
        }

        //destroyTexture(myGame);


}
int Text(game *myGame,font *mFont, char ctext[])
{

    printf("%s\n",ctext);

    if(TTF_Init() == -1)
    {
        fprintf(stderr, "Erreur d'initialisation de TTF_Init : %s\n", TTF_GetError());
        exit(EXIT_FAILURE);
    }

    mFont->g_font=TTF_OpenFont("./Fonts/Matilda.ttf",TAILLE);

    if(!mFont->g_font) {
        printf("TTF_OpenFont: %s\n", TTF_GetError());
        SDL_Delay(5000);
        exit(EXIT_FAILURE);
    }

     SDL_Color fontColor={255,255,255};
     myGame->g_surface=TTF_RenderUTF8_Solid(mFont->g_font, ctext, fontColor);//Charge la police
    SDL_Rect rectangle;

    rectangle.x=0;//debut x
    rectangle.y=0;//debut y
    rectangle.w=600; //Largeur
    rectangle.h=25; //Hauteur

    myGame->g_texture = SDL_CreateTextureFromSurface(myGame->g_pRenderer,myGame->g_surface); // Préparation de la texture pour la chaine
    SDL_QueryTexture(myGame->g_texture,NULL,NULL,&rectangle.w,&rectangle.h);//Resiz
    myGame->g_surface = IMG_Load("./Assets/main.png");

    // Libération de la ressource occupée par le sprite
    if(!myGame->g_surface)
        SDL_FreeSurface(myGame->g_surface);


    if(myGame->g_texture){
        SDL_RenderCopy(myGame->g_pRenderer,myGame->g_texture,NULL,&rectangle); // Copie du sprite grâce au SDL_Renderer
        SDL_RenderPresent(myGame->g_pRenderer);
    }
    return 1;

}

