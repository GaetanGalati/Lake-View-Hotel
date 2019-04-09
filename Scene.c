#include <stdio.h>
#include <stdlib.h>

#include <SDL.h>
#include <SDL_image.h>
#include <SDL_ttf.h>
#include <SDL_mixer.h>
#include <stdio.h>
#include "Game.h"
#include "Scene.h"
#include "Destroy.h"

//UI
void PlayerInventory(gameState *state,game *myGame,Inventory inventaire[],int *savesate){
        SDL_Rect rectangleDest;
        SDL_Rect rectangleSource;
        SDL_Event event;

    myGame->g_surface = IMG_Load("./Assets/Inventaire_Menu.png");
        if(myGame->g_surface){


                 myGame->g_texture = SDL_CreateTextureFromSurface(myGame->g_pRenderer,myGame->g_surface); // Préparation du sprite
                 SDL_FreeSurface(myGame->g_surface); // Libération de la ressource occupée par le sprite

                if(myGame->g_texture){

                    rectangleSource.x=0;
                    rectangleSource.y=-0;
                    rectangleSource.w=800;//1 image = w:128 et h:82
                    rectangleSource.h=500;

                    SDL_QueryTexture(myGame->g_texture,NULL,NULL,NULL,NULL);

                    //Définition du rectangle dest pour dessiner Bitmap
                    rectangleDest.x=SCREEN_WIDTH/2-rectangleSource.w/2;//debut x
                    rectangleDest.y=150;//debut y
                    rectangleDest.w=rectangleSource.w; //Largeur
                    rectangleDest.h=rectangleSource.h; //Hauteur

                    SDL_RenderCopy(myGame->g_pRenderer,myGame->g_texture,&rectangleSource,&rectangleDest);


                    //SDL_FLIP_NONE
                    //SDL_FLIP_VERTICAL



                    SDL_RenderPresent(myGame->g_pRenderer); // Affichage

                    SDL_RenderClear(myGame->g_pRenderer);


                }

                else{
                        fprintf(stdout,"Échec de création de la texture (%s)\n",SDL_GetError());
                }



        }else{
            fprintf(stdout,"Échec de chargement du sprite (%s)\n",SDL_GetError());
        }


    destroyTexture(myGame);





}
void playerdocument(gameState *state,game *myGame,Inventory inventaire[],int *savesate){
        SDL_Rect rectangleDest;
        SDL_Rect rectangleSource;


    myGame->g_surface = IMG_Load("./Assets/Note_Menu.png");
        if(myGame->g_surface){


                 myGame->g_texture = SDL_CreateTextureFromSurface(myGame->g_pRenderer,myGame->g_surface); // Préparation du sprite
                 SDL_FreeSurface(myGame->g_surface); // Libération de la ressource occupée par le sprite

                if(myGame->g_texture){

                    rectangleSource.x=0;
                    rectangleSource.y=-0;
                    rectangleSource.w=800;//1 image = w:128 et h:82
                    rectangleSource.h=500;

                    SDL_QueryTexture(myGame->g_texture,NULL,NULL,NULL,NULL);

                    //Définition du rectangle dest pour dessiner Bitmap
                    rectangleDest.x=SCREEN_WIDTH/2-rectangleSource.w/2;//debut x
                    rectangleDest.y=150;//debut y
                    rectangleDest.w=rectangleSource.w; //Largeur
                    rectangleDest.h=rectangleSource.h; //Hauteur

                    SDL_RenderCopy(myGame->g_pRenderer,myGame->g_texture,&rectangleSource,&rectangleDest);


                    //SDL_FLIP_NONE
                    //SDL_FLIP_VERTICAL



                    SDL_RenderPresent(myGame->g_pRenderer); // Affichage

                    SDL_RenderClear(myGame->g_pRenderer);


                }

                else{
                        fprintf(stdout,"Échec de création de la texture (%s)\n",SDL_GetError());
                }



        }else{
            fprintf(stdout,"Échec de chargement du sprite (%s)\n",SDL_GetError());
        }


   destroyTexture(myGame);


}
void Note1(game *myGame,gameState state){
        SDL_Rect rectangleDest;
        SDL_Rect rectangleSource;
        myGame->g_surface = IMG_Load("./Assets/Note1.png");
        if(myGame->g_surface){


                 myGame->g_texture = SDL_CreateTextureFromSurface(myGame->g_pRenderer,myGame->g_surface); // Préparation du sprite
                 SDL_FreeSurface(myGame->g_surface); // Libération de la ressource occupée par le sprite

                if(myGame->g_texture){

                    rectangleSource.x=0;
                    rectangleSource.y=-0;
                    rectangleSource.w=800;//1 image = w:128 et h:82
                    rectangleSource.h=500;

                    SDL_QueryTexture(myGame->g_texture,NULL,NULL,NULL,NULL);

                    //Définition du rectangle dest pour dessiner Bitmap
                    rectangleDest.x=SCREEN_WIDTH/2-rectangleSource.w/2;//debut x
                    rectangleDest.y=150;//debut y
                    rectangleDest.w=rectangleSource.w; //Largeur
                    rectangleDest.h=rectangleSource.h; //Hauteur

                    SDL_RenderCopy(myGame->g_pRenderer,myGame->g_texture,&rectangleSource,&rectangleDest);


                    //SDL_FLIP_NONE
                    //SDL_FLIP_VERTICAL



                    SDL_RenderPresent(myGame->g_pRenderer); // Affichage

                    SDL_RenderClear(myGame->g_pRenderer);


                }

                else{
                        fprintf(stdout,"Échec de création de la texture (%s)\n",SDL_GetError());
                }



        }else{
            fprintf(stdout,"Échec de chargement du sprite (%s)\n",SDL_GetError());
        }


   destroyTexture(myGame);


}
void Note2(game *myGame,gameState state){
        SDL_Rect rectangleDest;
        SDL_Rect rectangleSource;
        myGame->g_surface = IMG_Load("./Assets/Note2.png");
        if(myGame->g_surface){


                 myGame->g_texture = SDL_CreateTextureFromSurface(myGame->g_pRenderer,myGame->g_surface); // Préparation du sprite
                 SDL_FreeSurface(myGame->g_surface); // Libération de la ressource occupée par le sprite

                if(myGame->g_texture){

                    rectangleSource.x=0;
                    rectangleSource.y=-0;
                    rectangleSource.w=800;//1 image = w:128 et h:82
                    rectangleSource.h=500;

                    SDL_QueryTexture(myGame->g_texture,NULL,NULL,NULL,NULL);

                    //Définition du rectangle dest pour dessiner Bitmap
                    rectangleDest.x=SCREEN_WIDTH/2-rectangleSource.w/2;//debut x
                    rectangleDest.y=150;//debut y
                    rectangleDest.w=rectangleSource.w; //Largeur
                    rectangleDest.h=rectangleSource.h; //Hauteur

                    SDL_RenderCopy(myGame->g_pRenderer,myGame->g_texture,&rectangleSource,&rectangleDest);


                    //SDL_FLIP_NONE
                    //SDL_FLIP_VERTICAL



                    SDL_RenderPresent(myGame->g_pRenderer); // Affichage

                    SDL_RenderClear(myGame->g_pRenderer);


                }

                else{
                        fprintf(stdout,"Échec de création de la texture (%s)\n",SDL_GetError());
                }



        }else{
            fprintf(stdout,"Échec de chargement du sprite (%s)\n",SDL_GetError());
        }


   destroyTexture(myGame);


}
void Note3(game *myGame,gameState state){
        SDL_Rect rectangleDest;
        SDL_Rect rectangleSource;
        myGame->g_surface = IMG_Load("./Assets/Note3.png");
        if(myGame->g_surface){


                 myGame->g_texture = SDL_CreateTextureFromSurface(myGame->g_pRenderer,myGame->g_surface); // Préparation du sprite
                 SDL_FreeSurface(myGame->g_surface); // Libération de la ressource occupée par le sprite

                if(myGame->g_texture){

                    rectangleSource.x=0;
                    rectangleSource.y=-0;
                    rectangleSource.w=800;//1 image = w:128 et h:82
                    rectangleSource.h=500;

                    SDL_QueryTexture(myGame->g_texture,NULL,NULL,NULL,NULL);

                    //Définition du rectangle dest pour dessiner Bitmap
                    rectangleDest.x=SCREEN_WIDTH/2-rectangleSource.w/2;//debut x
                    rectangleDest.y=150;//debut y
                    rectangleDest.w=rectangleSource.w; //Largeur
                    rectangleDest.h=rectangleSource.h; //Hauteur

                    SDL_RenderCopy(myGame->g_pRenderer,myGame->g_texture,&rectangleSource,&rectangleDest);


                    //SDL_FLIP_NONE
                    //SDL_FLIP_VERTICAL



                    SDL_RenderPresent(myGame->g_pRenderer); // Affichage

                    SDL_RenderClear(myGame->g_pRenderer);


                }

                else{
                        fprintf(stdout,"Échec de création de la texture (%s)\n",SDL_GetError());
                }



        }else{
            fprintf(stdout,"Échec de chargement du sprite (%s)\n",SDL_GetError());
        }


   destroyTexture(myGame);


}
void Note4(game *myGame,gameState state){
        SDL_Rect rectangleDest;
        SDL_Rect rectangleSource;
        myGame->g_surface = IMG_Load("./Assets/Note4.png");
        if(myGame->g_surface){


                 myGame->g_texture = SDL_CreateTextureFromSurface(myGame->g_pRenderer,myGame->g_surface); // Préparation du sprite
                 SDL_FreeSurface(myGame->g_surface); // Libération de la ressource occupée par le sprite

                if(myGame->g_texture){

                    rectangleSource.x=0;
                    rectangleSource.y=-0;
                    rectangleSource.w=800;//1 image = w:128 et h:82
                    rectangleSource.h=500;

                    SDL_QueryTexture(myGame->g_texture,NULL,NULL,NULL,NULL);

                    //Définition du rectangle dest pour dessiner Bitmap
                    rectangleDest.x=SCREEN_WIDTH/2-rectangleSource.w/2;//debut x
                    rectangleDest.y=150;//debut y
                    rectangleDest.w=rectangleSource.w; //Largeur
                    rectangleDest.h=rectangleSource.h; //Hauteur

                    SDL_RenderCopy(myGame->g_pRenderer,myGame->g_texture,&rectangleSource,&rectangleDest);


                    //SDL_FLIP_NONE
                    //SDL_FLIP_VERTICAL



                    SDL_RenderPresent(myGame->g_pRenderer); // Affichage

                    SDL_RenderClear(myGame->g_pRenderer);


                }

                else{
                        fprintf(stdout,"Échec de création de la texture (%s)\n",SDL_GetError());
                }



        }else{
            fprintf(stdout,"Échec de chargement du sprite (%s)\n",SDL_GetError());
        }


   destroyTexture(myGame);


}
void Note5(game *myGame,gameState state){
        SDL_Rect rectangleDest;
        SDL_Rect rectangleSource;
        myGame->g_surface = IMG_Load("./Assets/Note5.png");
        if(myGame->g_surface){


                 myGame->g_texture = SDL_CreateTextureFromSurface(myGame->g_pRenderer,myGame->g_surface); // Préparation du sprite
                 SDL_FreeSurface(myGame->g_surface); // Libération de la ressource occupée par le sprite

                if(myGame->g_texture){

                    rectangleSource.x=0;
                    rectangleSource.y=-0;
                    rectangleSource.w=800;//1 image = w:128 et h:82
                    rectangleSource.h=500;

                    SDL_QueryTexture(myGame->g_texture,NULL,NULL,NULL,NULL);

                    //Définition du rectangle dest pour dessiner Bitmap
                    rectangleDest.x=SCREEN_WIDTH/2-rectangleSource.w/2;//debut x
                    rectangleDest.y=150;//debut y
                    rectangleDest.w=rectangleSource.w; //Largeur
                    rectangleDest.h=rectangleSource.h; //Hauteur

                    SDL_RenderCopy(myGame->g_pRenderer,myGame->g_texture,&rectangleSource,&rectangleDest);


                    //SDL_FLIP_NONE
                    //SDL_FLIP_VERTICAL



                    SDL_RenderPresent(myGame->g_pRenderer); // Affichage

                    SDL_RenderClear(myGame->g_pRenderer);


                }

                else{
                        fprintf(stdout,"Échec de création de la texture (%s)\n",SDL_GetError());
                }



        }else{
            fprintf(stdout,"Échec de chargement du sprite (%s)\n",SDL_GetError());
        }


   destroyTexture(myGame);


}
void Note6(game *myGame,gameState state){
        SDL_Rect rectangleDest;
        SDL_Rect rectangleSource;
        myGame->g_surface = IMG_Load("./Assets/Note6.png");
        if(myGame->g_surface){


                 myGame->g_texture = SDL_CreateTextureFromSurface(myGame->g_pRenderer,myGame->g_surface); // Préparation du sprite
                 SDL_FreeSurface(myGame->g_surface); // Libération de la ressource occupée par le sprite

                if(myGame->g_texture){

                    rectangleSource.x=0;
                    rectangleSource.y=-0;
                    rectangleSource.w=800;//1 image = w:128 et h:82
                    rectangleSource.h=500;

                    SDL_QueryTexture(myGame->g_texture,NULL,NULL,NULL,NULL);

                    //Définition du rectangle dest pour dessiner Bitmap
                    rectangleDest.x=SCREEN_WIDTH/2-rectangleSource.w/2;//debut x
                    rectangleDest.y=150;//debut y
                    rectangleDest.w=rectangleSource.w; //Largeur
                    rectangleDest.h=rectangleSource.h; //Hauteur

                    SDL_RenderCopy(myGame->g_pRenderer,myGame->g_texture,&rectangleSource,&rectangleDest);


                    //SDL_FLIP_NONE
                    //SDL_FLIP_VERTICAL



                    SDL_RenderPresent(myGame->g_pRenderer); // Affichage

                    SDL_RenderClear(myGame->g_pRenderer);


                }

                else{
                        fprintf(stdout,"Échec de création de la texture (%s)\n",SDL_GetError());
                }



        }else{
            fprintf(stdout,"Échec de chargement du sprite (%s)\n",SDL_GetError());
        }


   destroyTexture(myGame);


}


//SCENE
void intro(game *myGame,gameState state){
        SDL_Rect rectangleDest;
        SDL_Rect rectangleSource;
        SDL_Event event;

    myGame->g_surface = IMG_Load("./Assets/Intro.png");
        if(myGame->g_surface){


                 myGame->g_texture = SDL_CreateTextureFromSurface(myGame->g_pRenderer,myGame->g_surface); // Préparation du sprite
                 SDL_FreeSurface(myGame->g_surface); // Libération de la ressource occupée par le sprite

                if(myGame->g_texture){

                    rectangleSource.x=0;
                    rectangleSource.y=-0;
                    rectangleSource.w=800;//1 image = w:128 et h:82
                    rectangleSource.h=500;

                    SDL_QueryTexture(myGame->g_texture,NULL,NULL,NULL,NULL);

                    //Définition du rectangle dest pour dessiner Bitmap
                    rectangleDest.x=SCREEN_WIDTH/2-rectangleSource.w/2;//debut x
                    rectangleDest.y=150;//debut y
                    rectangleDest.w=rectangleSource.w; //Largeur
                    rectangleDest.h=rectangleSource.h; //Hauteur

                    SDL_RenderCopy(myGame->g_pRenderer,myGame->g_texture,&rectangleSource,&rectangleDest);


                    //SDL_FLIP_NONE
                    //SDL_FLIP_VERTICAL



                    SDL_RenderPresent(myGame->g_pRenderer); // Affichage

                    SDL_RenderClear(myGame->g_pRenderer);


                }

                else{
                        fprintf(stdout,"Échec de création de la texture (%s)\n",SDL_GetError());
                }



        }else{
            fprintf(stdout,"Échec de chargement du sprite (%s)\n",SDL_GetError());
        }


    destroyTexture(myGame);





}
void MainScreen(game *myGame,gameState state){

        SDL_Rect rectangleDest;
        SDL_Rect rectangleSource;

        if (state.g_bRunning==1){
            myGame->g_surface = IMG_Load("./Assets/main.png");//Chargement de l'image png
            printf("Ecran titre\n");
        }

        if(myGame->g_surface){


                 myGame->g_texture = SDL_CreateTextureFromSurface(myGame->g_pRenderer,myGame->g_surface); // Préparation du sprite
                 SDL_FreeSurface(myGame->g_surface); // Libération de la ressource occupée par le sprite

                if(myGame->g_texture){

                    rectangleSource.x=0;
                    rectangleSource.y=0;
                    rectangleSource.w=800;//1 image = w:128 et h:82
                    rectangleSource.h=500;

                    SDL_QueryTexture(myGame->g_texture,NULL,NULL,NULL,NULL);

                    //Définition du rectangle dest pour dessiner Bitmap
                    rectangleDest.x=SCREEN_WIDTH/2-rectangleSource.w/2;//debut x
                    rectangleDest.y=150;//debut y
                    rectangleDest.w=rectangleSource.w; //Largeur
                    rectangleDest.h=rectangleSource.h; //Hauteur

                    SDL_RenderCopy(myGame->g_pRenderer,myGame->g_texture,&rectangleSource,&rectangleDest);


                    //SDL_FLIP_NONE
                    //SDL_FLIP_HORIZONTAL
                    //SDL_FLIP_VERTICAL



                    SDL_RenderPresent(myGame->g_pRenderer); // Affichage

                    SDL_RenderClear(myGame->g_pRenderer);


                }

                else{
                        fprintf(stdout,"Échec de création de la texture (%s)\n",SDL_GetError());
                }



        }else{
            fprintf(stdout,"Échec de chargement du sprite (%s)\n",SDL_GetError());
        }


    destroyTexture(myGame);

}
void Scene1(game *myGame,gameState state){
        SDL_Rect rectangleDest;
        SDL_Rect rectangleSource;
        if (state.g_bRunning==2){
            myGame->g_surface = IMG_Load("./Assets/scene1.png");//Chargement de l'image png
        }


        if(myGame->g_surface){


                 myGame->g_texture = SDL_CreateTextureFromSurface(myGame->g_pRenderer,myGame->g_surface); // Préparation du sprite
                 SDL_FreeSurface(myGame->g_surface); // Libération de la ressource occupée par le sprite

                if(myGame->g_texture){

                    rectangleSource.x=0;
                    rectangleSource.y=-0;
                    rectangleSource.w=800;//1 image = w:128 et h:82
                    rectangleSource.h=500;

                    SDL_QueryTexture(myGame->g_texture,NULL,NULL,NULL,NULL);

                    //Définition du rectangle dest pour dessiner Bitmap
                    rectangleDest.x=SCREEN_WIDTH/2-rectangleSource.w/2;//debut x
                    rectangleDest.y=150;//debut y
                    rectangleDest.w=rectangleSource.w; //Largeur
                    rectangleDest.h=rectangleSource.h; //Hauteur

                    SDL_RenderCopy(myGame->g_pRenderer,myGame->g_texture,&rectangleSource,&rectangleDest);


                    //SDL_FLIP_NONE
                    //SDL_FLIP_VERTICAL



                    SDL_RenderPresent(myGame->g_pRenderer); // Affichage

                    SDL_RenderClear(myGame->g_pRenderer);


                }

                else{
                        fprintf(stdout,"Échec de création de la texture (%s)\n",SDL_GetError());
                }



        }else{
            fprintf(stdout,"Échec de chargement du sprite (%s)\n",SDL_GetError());
        }


    destroyTexture(myGame);

}
void Scene2(game *myGame,gameState state){
        SDL_Rect rectangleDest;
        SDL_Rect rectangleSource;
        if (state.g_bRunning==3){
            myGame->g_surface = IMG_Load("./Assets/scene2.png");//Chargement de l'image png
        }


        if(myGame->g_surface){


                 myGame->g_texture = SDL_CreateTextureFromSurface(myGame->g_pRenderer,myGame->g_surface); // Préparation du sprite
                 SDL_FreeSurface(myGame->g_surface); // Libération de la ressource occupée par le sprite

                if(myGame->g_texture){

                    rectangleSource.x=0;
                    rectangleSource.y=-0;
                    rectangleSource.w=800;//1 image = w:128 et h:82
                    rectangleSource.h=500;

                    SDL_QueryTexture(myGame->g_texture,NULL,NULL,NULL,NULL);

                    //Définition du rectangle dest pour dessiner Bitmap
                    rectangleDest.x=SCREEN_WIDTH/2-rectangleSource.w/2;//debut x
                    rectangleDest.y=150;//debut y
                    rectangleDest.w=rectangleSource.w; //Largeur
                    rectangleDest.h=rectangleSource.h; //Hauteur

                    SDL_RenderCopy(myGame->g_pRenderer,myGame->g_texture,&rectangleSource,&rectangleDest);


                    //SDL_FLIP_NONE
                    //SDL_FLIP_VERTICAL



                    SDL_RenderPresent(myGame->g_pRenderer); // Affichage

                    SDL_RenderClear(myGame->g_pRenderer);


                }

                else{
                        fprintf(stdout,"Échec de création de la texture (%s)\n",SDL_GetError());
                }



        }else{
            fprintf(stdout,"Échec de chargement du sprite (%s)\n",SDL_GetError());
        }


    destroyTexture(myGame);

}

































