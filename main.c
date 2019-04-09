#include <stdio.h>
#include <stdlib.h>

#include <SDL.h>
#include <SDL_image.h>
#include <SDL_ttf.h>
#include <SDL_mixer.h>
#include <stdio.h>
#include "Game.h"
#include "Scene.h"

int main( int argc, char* args[]){
    game myGame;
    gameState state;

    int savesate = 0;
    int nNote=0;
    font mFont;
    Document Doc[6];
        Doc[1].Doc1=false;
        Doc[1].Doc2=false;
        Doc[1].Doc3=false;
        Doc[1].Doc4=false;
        Doc[1].Doc5=false;
        Doc[1].Doc6=false;

    Inventory inventaire[6];
        inventaire[1].GoldKey201=false;
        inventaire[1].SilverKeyCouloir=false;
        inventaire[1].gasoline=false;
        inventaire[1].lighter=false;
        inventaire[1].Salt=false;
        inventaire[1].reception_Key=false;


    int myBool = 0;
    int myBool2 = 0;
    printf("%d",myBool2);
    Mix_Music *myMusique;
    if(init("Lake View Hotel ",SDL_WINDOWPOS_CENTERED,SDL_WINDOWPOS_CENTERED,SCREEN_WIDTH,SCREEN_HEIGHT,SDL_WINDOW_SHOWN,&myGame,&mFont)){

                state.g_bRunning=1;


    }else{

            return 1;//something's wrong

    }


    savesate = state.g_bRunning;
//    writeSDL(&myGame,mFont);
    myMusique = Mix_LoadMUS("./Assets/son/Silent Hill Promise Extended.wav");

    while(state.g_bRunning != 0){
        handleEvents(&state,&myGame,&mFont,inventaire,Doc,&savesate,&nNote);
        if (myBool == 0 && state.g_bRunning ==1){
            MainScreen(&myGame,state);
            Mix_PlayMusic(myMusique, 1);
            myBool = 1;
        }
        else if (state.g_bRunning == -1){//MENU INVENTAIRE
                PlayerInventory(&state,&myGame,inventaire,&savesate) ;
                myBool2 = 1;
        }
        else if (state.g_bRunning == -2){//MENU NOTES
                playerdocument(&state,&myGame,inventaire,&savesate) ;
                myBool2 = 1;
        }

        else if (state.g_bRunning == -3){
                Note1(&myGame,state);
                myBool2 = 1;
        }
        else if (state.g_bRunning == -4){
                Note2(&myGame,state);
                myBool2 = 1;
        }
        else if (state.g_bRunning == -5){
                Note3(&myGame,state);
                myBool2 = 1;
        }
        else if (state.g_bRunning == -6){
                Note4(&myGame,state);
                myBool2 = 1;
        }
        else if (state.g_bRunning == -7){
                Note5(&myGame,state);
                myBool2 = 1;
        }
        else if (state.g_bRunning == -8){
                Note6(&myGame,state);
                myBool2 = 1;
        }
        else if (state.g_bRunning == -9){
                intro(&myGame,state);
                myBool2 = 1;
        }
        else if (state.g_bRunning == 2){
                Scene1(&myGame,state);
                myBool2 = 1;
        }
        else if (state.g_bRunning == 3){
                Scene2(&myGame,state);
                myBool2 = 1;
        }


    }
	TTF_Quit();
	SDL_Quit();


	return 0;
}
void handleEvents(gameState *state,game *myGame,font *mFont,Inventory inventaire[],Document doc[], int *savesate, int *nNote){

    FILE* save;
    save = NULL;
    SDL_Event event;
    BOOL IsMenuActive=false;

    if(SDL_PollEvent(&event)){
        switch(event.type){
        case SDL_QUIT:
              state->g_bRunning=0;break;
        case SDL_KEYDOWN:
                        switch (event.key.keysym.sym)
                            {
                                case SDLK_ESCAPE:{
                                        SaveGame(save,state,myGame,doc,inventaire);
                                        state->g_bRunning = 0;
                                        }
                                break;
                                case SDLK_SPACE:{
                                        if (state->g_bRunning == -9)
                                            state->g_bRunning = 2;
                                        };break;
                                case SDLK_F10: SaveGame(save,state,myGame,doc,inventaire);break;
                                case SDLK_F11: loadGame(save,state,myGame,doc,inventaire);break;
                            }
                            break;
    SDL_WaitEvent(&event);

        }
    }
    switch(event.type)
    {
        case SDL_QUIT: state->g_bRunning=0;break;
        case SDL_KEYDOWN:
                switch (event.key.keysym.sym)
                        {
                            case SDLK_a: {
                                            if (IsMenuActive == false && state->g_bRunning > 1){
                                                *savesate = state->g_bRunning;
                                                state->g_bRunning = -1;
                                                IsMenuActive = true;
                                                SDL_WaitEvent(&event);
                                            }else
                                            if (IsMenuActive == true && state->g_bRunning < 1){
                                                state->g_bRunning = *savesate;
                                                IsMenuActive = false;
                                                SDL_WaitEvent(&event);
                                            }
                                            }break;
                            case SDLK_e:  {
                                            if (IsMenuActive == false && state->g_bRunning > 1){
                                                *savesate = state->g_bRunning;
                                                state->g_bRunning = -2;
                                                IsMenuActive = true;
                                                SDL_WaitEvent(&event);
                                            }else
                                            if (IsMenuActive == true && state->g_bRunning < 1){
                                                state->g_bRunning = *savesate;
                                                IsMenuActive = false;
                                                SDL_WaitEvent(&event);
                                            }
                                            }break;
                            }
                            break;
        case SDL_MOUSEBUTTONUP:
                if(((event.button.x > 737 ) && (event.button.x < 795))&&((event.button.y > 147)&&(event.button.y <220))&&(state->g_bRunning < 0)){
                    printf("Clik dans les notes ! \n");
                    SDL_RenderClear(myGame->g_pRenderer);
                    state->g_bRunning = *savesate;
                    printf("STATE : %d",state->g_bRunning);
                }
        //Main Scree
        if ((event.button.button == SDL_BUTTON_LEFT) && (state->g_bRunning==1)){
                SDL_WaitEvent(&event);
                printf("\nSourie en X : %d\n",event.button.x);
                printf("Sourie en Y : %d\n",event.button.y);

                if(((event.button.x>267) && (event.button.x<475))&&((event.button.y > 407)&&(event.button.y <441))){
                    loadGame(save,state,myGame,doc,inventaire);
                }
                if(((event.button.x>246) && (event.button.x<502))&&((event.button.y > 445)&&(event.button.y <500))){
                    remove("save.txt");
                    state->g_bRunning = -9;
                }

            }
        //INVENTAIRE
        if ((event.button.button == SDL_BUTTON_LEFT) && (state->g_bRunning==-1)){
                SDL_WaitEvent(&event);
                printf("\nSourie en X : %d\n",event.button.x);
                printf("Sourie en Y : %d\n",event.button.y);

                if(((event.button.x > 95 ) && (event.button.x < 240))&& ((event.button.y > 273)&&(event.button.y <421))&& (inventaire[1].GoldKey201 == false)){
                    char ctext[] = "Je n'ai pas cet objet";
                    printf("Clik sur la clé en or ! \n");
                    Text(myGame,mFont,ctext);
                    SDL_Delay(1500);
                    SDL_RenderClear(myGame->g_pRenderer);
                }
                if(((event.button.x > 95 ) && (event.button.x < 240))&& ((event.button.y > 273)&&(event.button.y <421))&& (inventaire[1].GoldKey201 == true)){
                    char ctext[] = "Une clé en or, elle peut être utile";
                    printf("Clik sur la clé en or ! \n");
                    Text(myGame,mFont,ctext);
                    SDL_Delay(1500);
                    SDL_RenderClear(myGame->g_pRenderer);
                }

                if(((event.button.x > 325 ) && (event.button.x < 467))&& ((event.button.y > 273)&&(event.button.y <421))&& (inventaire[1].SilverKeyCouloir == true)){
                    char ctext[] = "Une clé en argent, il y a écrit 'couloir'" ;
                    printf("Clik sur la clé en argent ! \n");
                    Text(myGame,mFont,ctext);
                    SDL_Delay(1500);
                    SDL_RenderClear(myGame->g_pRenderer);
                }
                if(((event.button.x > 325 ) && (event.button.x < 467))&& ((event.button.y > 273)&&(event.button.y <421))&& (inventaire[1].SilverKeyCouloir == false)){
                    char ctext[] = "Je n'ai pas cet objet";
                    printf("Clik sur la clé en argent ! \n");
                    Text(myGame,mFont,ctext);
                    SDL_Delay(1500);
                    SDL_RenderClear(myGame->g_pRenderer);
                }

                if(((event.button.x > 576 ) && (event.button.x < 721))&& ((event.button.y > 273)&&(event.button.y <421))&& (inventaire[1].lighter == true)){
                    char ctext[] = "Un vieux briquet, avec écrit 'Lake View Hotel'";
                    printf("Clik sur le briquet ! \n");
                    Text(myGame,mFont,ctext);
                    SDL_Delay(1500);
                    SDL_RenderClear(myGame->g_pRenderer);
                }
                if(((event.button.x > 576 ) && (event.button.x < 721))&& ((event.button.y > 273)&&(event.button.y <421))&& (inventaire[1].lighter == false)){
                    char ctext[] = "Je n'ai pas cet objet";
                    printf("Clik sur la briquet ! \n");
                    Text(myGame,mFont,ctext);
                    SDL_Delay(1500);
                    SDL_RenderClear(myGame->g_pRenderer);
                }

                if(((event.button.x > 94 ) && (event.button.x < 237))&& ((event.button.y > 438)&&(event.button.y <585))&& (inventaire[1].gasoline == true)){
                    char ctext[] = "De l'éscence... De quoi faire un beau feu";
                    printf("Clik sur éscence ! \n");
                    Text(myGame,mFont,ctext);
                    SDL_Delay(1500);
                    SDL_RenderClear(myGame->g_pRenderer);
                }
                if(((event.button.x > 94 ) && (event.button.x < 237))&& ((event.button.y > 438)&&(event.button.y <585))&& (inventaire[1].gasoline == false)){
                    char ctext[] = "Je n'ai pas cet objet";
                    printf("Clik sur éscence ! \n");
                    Text(myGame,mFont,ctext);
                    SDL_Delay(1500);
                    SDL_RenderClear(myGame->g_pRenderer);
                }

                if(((event.button.x > 325 ) && (event.button.x < 467))&& ((event.button.y > 438)&&(event.button.y <585))&& (inventaire[1].reception_Key  == true)){
                    char ctext[] = "Une gemme rouge...";
                    printf("Clik sur la gemme ! \n");
                    Text(myGame,mFont,ctext);
                    SDL_Delay(1500);
                    SDL_RenderClear(myGame->g_pRenderer);
                }
                if(((event.button.x > 325 ) && (event.button.x < 467))&& ((event.button.y > 438)&&(event.button.y <585))&& (inventaire[1].reception_Key == false)){
                    char ctext[] = "Je n'ai pas cet objet";
                    printf("Clik sur gemme ! \n");
                    Text(myGame,mFont,ctext);
                    SDL_Delay(1500);
                    SDL_RenderClear(myGame->g_pRenderer);
                }

                if(((event.button.x > 576 ) && (event.button.x < 720))&& ((event.button.y > 438)&&(event.button.y <585))&& (inventaire[1].Salt  == true)){
                    char ctext[] = "Du sel";
                    printf("Clik sur la sel ! \n");
                    Text(myGame,mFont,ctext);
                    SDL_Delay(1500);
                    SDL_RenderClear(myGame->g_pRenderer);
                }
                if(((event.button.x > 576 ) && (event.button.x < 720))&& ((event.button.y > 438)&&(event.button.y <585))&& (inventaire[1].Salt == false)){
                    char ctext[] = "Je n'ai pas cet objet";
                    printf("Clik sur sel ! \n");
                    Text(myGame,mFont,ctext);
                    SDL_Delay(1500);
                    SDL_RenderClear(myGame->g_pRenderer);
                }


        }
        //NOTES
        if ((event.button.button == SDL_BUTTON_LEFT) && (state->g_bRunning==-2)){
                SDL_WaitEvent(&event);
                printf("\nSourie en X : %d\n",event.button.x);
                printf("Sourie en Y : %d\n",event.button.y);

                if(((event.button.x > 95 ) && (event.button.x < 240))&& ((event.button.y > 273)&&(event.button.y <421))&& (doc[1].Doc1==false)){
                    char ctext[] = "Je n'ai pas cette note";
                    printf("Clik sur la clé en or ! \n");
                    Text(myGame,mFont,ctext);
                    SDL_Delay(1500);
                    SDL_RenderClear(myGame->g_pRenderer);
                }
                if(((event.button.x > 95 ) && (event.button.x < 240))&& ((event.button.y > 273)&&(event.button.y <421))&& (doc[1].Doc1== true)){
                    state->g_bRunning = -3;
                    printf("Clik sur le doc 1 \n");
                }

                if(((event.button.x > 325 ) && (event.button.x < 467))&& ((event.button.y > 273)&&(event.button.y <421))&& (doc[1].Doc2== true)){
                    state->g_bRunning = -4;
                    printf("Clik sur le doc 2 \n");
                    SDL_Delay(1500);
                    SDL_RenderClear(myGame->g_pRenderer);
                }
                if(((event.button.x > 325 ) && (event.button.x < 467))&& ((event.button.y > 273)&&(event.button.y <421))&& (doc[1].Doc2 == false)){
                    char ctext[] = "Je n'ai pas cette note";
                    printf("Clik sur la clé en argent ! \n");
                    Text(myGame,mFont,ctext);
                    SDL_Delay(1500);
                    SDL_RenderClear(myGame->g_pRenderer);
                }

                if(((event.button.x > 576 ) && (event.button.x < 721))&& ((event.button.y > 273)&&(event.button.y <421))&& (doc[1].Doc3 == true)){
                    state->g_bRunning = -5;
                    printf("Clik sur le doc 2 \n");
                }
                if(((event.button.x > 576 ) && (event.button.x < 721))&& ((event.button.y > 273)&&(event.button.y <421))&& (doc[1].Doc3 == false)){
                    char ctext[] = "Je n'ai pas cette note";
                    printf("Clik sur la briquet ! \n");
                    Text(myGame,mFont,ctext);
                    SDL_Delay(1500);
                    SDL_RenderClear(myGame->g_pRenderer);
                }

                if(((event.button.x > 94 ) && (event.button.x < 237))&& ((event.button.y > 438)&&(event.button.y <585))&& (doc[1].Doc4 == true)){
                    state->g_bRunning = -6;
                    printf("Clik sur le doc 2 \n");
                }
                if(((event.button.x > 94 ) && (event.button.x < 237))&& ((event.button.y > 438)&&(event.button.y <585))&& (doc[1].Doc4== false)){
                    char ctext[] = "Je n'ai pas cette note";
                    printf("Clik sur notes 4 ! \n");
                    Text(myGame,mFont,ctext);
                    SDL_Delay(1500);
                    SDL_RenderClear(myGame->g_pRenderer);
                }

                if(((event.button.x > 325 ) && (event.button.x < 467))&& ((event.button.y > 438)&&(event.button.y <585))&& (doc[1].Doc5== true)){
                    state->g_bRunning = -7;
                    printf("Clik sur le doc 2 \n");
                }
                if(((event.button.x > 325 ) && (event.button.x < 467))&& ((event.button.y > 438)&&(event.button.y <585))&& (doc[1].Doc5 == false)){
                    char ctext[] = "Je n'ai pas cette note";
                    printf("Clik sur notes 5 ! \n");
                    Text(myGame,mFont,ctext);
                    SDL_Delay(1500);
                    SDL_RenderClear(myGame->g_pRenderer);
                }

                if(((event.button.x > 576 ) && (event.button.x < 720))&& ((event.button.y > 438)&&(event.button.y <585))&& (doc[1].Doc6  == true)){
                    state->g_bRunning = -8;
                    printf("Clik sur le doc 2 \n");
                }
                if(((event.button.x > 576 ) && (event.button.x < 720))&& ((event.button.y > 438)&&(event.button.y <585))&& (doc[1].Doc6 == false)){
                    char ctext[] = "Je n'ai pas cette note";
                    printf("Clik sur notes 6 ! \n");
                    Text(myGame,mFont,ctext);
                    SDL_Delay(1500);
                    SDL_RenderClear(myGame->g_pRenderer);
                }


        }
        //Scene 1
        if ((event.button.button == SDL_BUTTON_LEFT) && (state->g_bRunning==2)){
                SDL_WaitEvent(&event);
                printf("\nSourie en X : %d\n",event.button.x);
                printf("Sourie en Y : %d\n",event.button.y);


            if(((event.button.x > 290 ) && (event.button.x < 423))&& ((event.button.y > 304)&&(event.button.y <496))){
                    char ctext[] = "La porte de ma chambre.... Il est trop tard pour sortir ! ";
                    printf("Clik sur la porte ! \n");
                    Text(myGame,mFont,ctext);
                    SDL_Delay(1500);
                    SDL_RenderClear(myGame->g_pRenderer);
                    //inventaire[1].lighter= true;
                }

            if(((event.button.x > 563 ) && (event.button.x < 788))&& ((event.button.y > 415)&&(event.button.y <501))){
                    char ctext[] = "Mon Lit.... Bon il est temps je vais dormir ";
                    printf("Clik sur le lit ! \n");
                    Text(myGame,mFont,ctext);
                    SDL_Delay(1000);
                    SDL_RenderClear(myGame->g_pRenderer);
                    state->g_bRunning = 3;
                }





        }
        //Scene 2
        if ((event.button.button == SDL_BUTTON_LEFT) && (state->g_bRunning==3)){
            SDL_WaitEvent(&event);
            printf("\nSourie en X : %d\n",event.button.x);
            printf("Sourie en Y : %d\n",event.button.y);

            //If...

            }
        }
}




