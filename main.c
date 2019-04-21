#include <stdio.h>
#include <stdlib.h>

#include <SDL.h>
#include <SDL_image.h>
#include <SDL_ttf.h>
#include <SDL_mixer.h>
#include <stdio.h>
#include "Game.h"
#include "Scene.h"
int code[4] = {0,0,0,0};//8634
//Utilisant de variable globalle pour évité qu'elle soit supprimer a chaque itération, se tableau repprésente le code a entrée par le joueur, une fois saisie ils dois étre sauvegarder pour ne pas que le joueur est a le réecrire a ,ouveau

int main( int argc, char* args[]){
//+++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++
//Description :  Le main va vérifié via une boucle While l'état du jeu
//
//Entrées : argc et args
//
//Sortie : Lancement d'une des fonction de scene
//
//Notes : X
//+++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++
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
        else if (state.g_bRunning == 4){
                Scene3(&myGame,state);
                myBool2 = 1;
                //printf("Scene3");
        }
        else if (state.g_bRunning == 5){
                Scene5(&myGame,state);
                myBool2 = 1;
                //printf("Scene3");
        }
        else if (state.g_bRunning == 6){
                Scene6(&myGame,state);
                myBool2 = 1;
        }
        else if (state.g_bRunning == 7){
                Scene7(&myGame,state);
                myBool2 = 1;
        }
        else if (state.g_bRunning == 8){
                Scene8(&myGame,state);
                myBool2 = 1;
        }
        else if (state.g_bRunning == 9){
                Scene9(&myGame,state);
                myBool2 = 1;
        }
        else if (state.g_bRunning == 10){
                Scene10(&myGame,state);
                myBool2 = 1;
        }
        else if (state.g_bRunning == 11){
                Scene11(&myGame,state);
                myBool2 = 1;
        }
        else if (state.g_bRunning == 12){
                Scene12(&myGame,state);
                myBool2 = 1;
        }
        else if (state.g_bRunning == 13){
                Scene13(&myGame,state);
                myBool2 = 1;
        }
        else if (state.g_bRunning == 14){
                Scene14(&myGame,state);
                myBool2 = 1;
        }
        else if (state.g_bRunning == 15){
                Scene15(&myGame,state);
                myBool2 = 1;
        }
        else if (state.g_bRunning == 16){
                Scene16(&myGame,state);
                myBool2 = 1;
        }
        else if (state.g_bRunning == 17){
                Scene17(&myGame,state);
                myBool2 = 1;
        }
        else if (state.g_bRunning == 18){
                Scene18(&myGame,state);
                myBool2 = 1;
        }
        else if (state.g_bRunning == 19){
                Scene19(&myGame,state);
                myBool2 = 1;
        }
        else if (state.g_bRunning == 20){
                Scene20(&myGame,state);
                myBool2 = 1;
        }
        else if (state.g_bRunning == 21){
                Scene21(&myGame,state);
                myBool2 = 1;
        }
        else if (state.g_bRunning == 22){
                Scene22(&myGame,state);
                myBool2 = 1;
        }
        else if (state.g_bRunning == 23){
                Scene23(&myGame,state);
                myBool2 = 1;
        }
        else if (state.g_bRunning == 24){
                Fin1(&myGame,state);
                myBool2 = 1;
        }
        else if (state.g_bRunning == 25){
                Fin2(&myGame,state);
                myBool2 = 1;
        }


    }
	TTF_Quit();
	SDL_Quit();


	return 0;
}
//+++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++
//Description :  Tres grosse procédure principal qui va géré les event, en foncton de la touche appuiez ou de l'endroit où l'ont clique, mais également en fonction de l'inventaire
//
//Entrées : l'état du jeu, l'inventaire, les document
//
//Sortie : Lancement d'une des fonction de scene
//
//Notes : X
//+++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++
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
                                        if (state->g_bRunning > 0){
                                            SaveGame(save,state,myGame,doc,inventaire);//Si echape le jeu se sauvegarde et se ferme
                                        }
                                        state->g_bRunning = 0;
                                        }
                                break;
                                case SDLK_SPACE:{
                                        if (state->g_bRunning == -9)
                                            state->g_bRunning = 2;
                                        };break;
                                case SDLK_F10:{
                                        if (state->g_bRunning > 0){
                                            SaveGame(save,state,myGame,doc,inventaire);//Sauvegarde
                                        }};break;
                                case SDLK_F11: loadGame(save,state,myGame,doc,inventaire);break;//Chargement
                            }
                            break;
    SDL_WaitEvent(&event);

        }
    }
    switch(event.type)
    {
        case SDL_QUIT: state->g_bRunning=0;break;//Si sdl quite le jeu se feme
        case SDL_KEYDOWN:
                switch (event.key.keysym.sym)
                        {
                            case SDLK_a: {
                                            if (IsMenuActive == false && state->g_bRunning > 1){
                                                *savesate = state->g_bRunning;//Vue que l'état va changer, sauvegarde de l'etat dans une variable tempo
                                                state->g_bRunning = -1;
                                                IsMenuActive = true;//Ouverture de l'inventaire
                                                SDL_WaitEvent(&event);
                                            }else
                                            if (IsMenuActive == true && state->g_bRunning < 1){
                                                state->g_bRunning = *savesate;//Fin de l'activation du menu, l'état reprend sa valeur précedente
                                                IsMenuActive = false;//Fermeuture
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
                    Text(myGame,mFont,ctext);
                    SDL_Delay(1500);
                    SDL_RenderClear(myGame->g_pRenderer);
                }
                if(((event.button.x > 95 ) && (event.button.x < 240))&& ((event.button.y > 273)&&(event.button.y <421))&& (inventaire[1].GoldKey201 == true)){
                    char ctext[] = "Une clé en or, elle peut être utile";
                    Text(myGame,mFont,ctext);
                    SDL_Delay(1500);
                    SDL_RenderClear(myGame->g_pRenderer);
                }

                if(((event.button.x > 325 ) && (event.button.x < 467))&& ((event.button.y > 273)&&(event.button.y <421))&& (inventaire[1].SilverKeyCouloir == true)){
                    char ctext[] = "Une clé en argent, il y a écrit 'couloir'" ;
                    Text(myGame,mFont,ctext);
                    SDL_Delay(1500);
                    SDL_RenderClear(myGame->g_pRenderer);
                }
                if(((event.button.x > 325 ) && (event.button.x < 467))&& ((event.button.y > 273)&&(event.button.y <421))&& (inventaire[1].SilverKeyCouloir == false)){
                    char ctext[] = "Je n'ai pas cet objet";
                    Text(myGame,mFont,ctext);
                    SDL_Delay(1500);
                    SDL_RenderClear(myGame->g_pRenderer);
                }

                if(((event.button.x > 576 ) && (event.button.x < 721))&& ((event.button.y > 273)&&(event.button.y <421))&& (inventaire[1].lighter == true)){
                    char ctext[] = "Un vieux briquet, avec écrit 'Lake View Hotel'";
                    Text(myGame,mFont,ctext);
                    SDL_Delay(1500);
                    SDL_RenderClear(myGame->g_pRenderer);
                }
                if(((event.button.x > 576 ) && (event.button.x < 721))&& ((event.button.y > 273)&&(event.button.y <421))&& (inventaire[1].lighter == false)){
                    char ctext[] = "Je n'ai pas cet objet";
                    Text(myGame,mFont,ctext);
                    SDL_Delay(1500);
                    SDL_RenderClear(myGame->g_pRenderer);
                }

                if(((event.button.x > 94 ) && (event.button.x < 237))&& ((event.button.y > 438)&&(event.button.y <585))&& (inventaire[1].gasoline == true)){
                    char ctext[] = "De l'éscence... De quoi faire un beau feu";
                    Text(myGame,mFont,ctext);
                    SDL_Delay(1500);
                    SDL_RenderClear(myGame->g_pRenderer);
                }
                if(((event.button.x > 94 ) && (event.button.x < 237))&& ((event.button.y > 438)&&(event.button.y <585))&& (inventaire[1].gasoline == false)){
                    char ctext[] = "Je n'ai pas cet objet";
                    Text(myGame,mFont,ctext);
                    SDL_Delay(1500);
                    SDL_RenderClear(myGame->g_pRenderer);
                }

                if(((event.button.x > 325 ) && (event.button.x < 467))&& ((event.button.y > 438)&&(event.button.y <585))&& (inventaire[1].reception_Key  == true)){
                    char ctext[] = "Les clées de certaine chambre...";
                    Text(myGame,mFont,ctext);
                    SDL_Delay(1500);
                    SDL_RenderClear(myGame->g_pRenderer);
                }
                if(((event.button.x > 325 ) && (event.button.x < 467))&& ((event.button.y > 438)&&(event.button.y <585))&& (inventaire[1].reception_Key == false)){
                    char ctext[] = "Je n'ai pas cet objet";
                    Text(myGame,mFont,ctext);
                    SDL_Delay(1500);
                    SDL_RenderClear(myGame->g_pRenderer);
                }

                if(((event.button.x > 576 ) && (event.button.x < 720))&& ((event.button.y > 438)&&(event.button.y <585))&& (inventaire[1].Salt  == true)){
                    char ctext[] = "Du sel";
                    Text(myGame,mFont,ctext);
                    SDL_Delay(1500);
                    SDL_RenderClear(myGame->g_pRenderer);
                }
                if(((event.button.x > 576 ) && (event.button.x < 720))&& ((event.button.y > 438)&&(event.button.y <585))&& (inventaire[1].Salt == false)){
                    char ctext[] = "Je n'ai pas cet objet";
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
                    Text(myGame,mFont,ctext);
                    SDL_Delay(1500);
                    SDL_RenderClear(myGame->g_pRenderer);
                }
                if(((event.button.x > 95 ) && (event.button.x < 240))&& ((event.button.y > 273)&&(event.button.y <421))&& (doc[1].Doc1== true)){
                    state->g_bRunning = -3;
                }

                if(((event.button.x > 325 ) && (event.button.x < 467))&& ((event.button.y > 273)&&(event.button.y <421))&& (doc[1].Doc2== true)){
                    state->g_bRunning = -4;
                    SDL_Delay(1500);
                    SDL_RenderClear(myGame->g_pRenderer);
                }
                if(((event.button.x > 325 ) && (event.button.x < 467))&& ((event.button.y > 273)&&(event.button.y <421))&& (doc[1].Doc2 == false)){
                    char ctext[] = "Je n'ai pas cette note";
                    Text(myGame,mFont,ctext);
                    SDL_Delay(1500);
                    SDL_RenderClear(myGame->g_pRenderer);
                }

                if(((event.button.x > 576 ) && (event.button.x < 721))&& ((event.button.y > 273)&&(event.button.y <421))&& (doc[1].Doc3 == true)){
                    state->g_bRunning = -5;
                }
                if(((event.button.x > 576 ) && (event.button.x < 721))&& ((event.button.y > 273)&&(event.button.y <421))&& (doc[1].Doc3 == false)){
                    char ctext[] = "Je n'ai pas cette note";
                    Text(myGame,mFont,ctext);
                    SDL_Delay(1500);
                    SDL_RenderClear(myGame->g_pRenderer);
                }

                if(((event.button.x > 94 ) && (event.button.x < 237))&& ((event.button.y > 438)&&(event.button.y <585))&& (doc[1].Doc4 == true)){
                    state->g_bRunning = -6;
                }
                if(((event.button.x > 94 ) && (event.button.x < 237))&& ((event.button.y > 438)&&(event.button.y <585))&& (doc[1].Doc4== false)){
                    char ctext[] = "Je n'ai pas cette note";
                    Text(myGame,mFont,ctext);
                    SDL_Delay(1500);
                    SDL_RenderClear(myGame->g_pRenderer);
                }

                if(((event.button.x > 325 ) && (event.button.x < 467))&& ((event.button.y > 438)&&(event.button.y <585))&& (doc[1].Doc5== true)){
                    state->g_bRunning = -7;
                }
                if(((event.button.x > 325 ) && (event.button.x < 467))&& ((event.button.y > 438)&&(event.button.y <585))&& (doc[1].Doc5 == false)){
                    char ctext[] = "Je n'ai pas cette note";
                    Text(myGame,mFont,ctext);
                    SDL_Delay(1500);
                    SDL_RenderClear(myGame->g_pRenderer);
                }

                if(((event.button.x > 576 ) && (event.button.x < 720))&& ((event.button.y > 438)&&(event.button.y <585))&& (doc[1].Doc6  == true)){
                    state->g_bRunning = -8;
                }
                if(((event.button.x > 576 ) && (event.button.x < 720))&& ((event.button.y > 438)&&(event.button.y <585))&& (doc[1].Doc6 == false)){
                    char ctext[] = "Je n'ai pas cette note";
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


            if(((event.button.x > 250 ) && (event.button.x < 379))&& ((event.button.y > 172)&&(event.button.y <429))){
                    char ctext[] = "La porte de ma chambre.... Il est trop tard pour sortir ! ";
                    Text(myGame,mFont,ctext);
                    SDL_Delay(1500);
                    SDL_RenderClear(myGame->g_pRenderer);
                    //inventaire[1].lighter= true;
                }
            if(((event.button.x > 8 ) && (event.button.x < 112))&& ((event.button.y > 367)&&(event.button.y <581))){
                    char ctext[] = "Une veille commode salle... Et vide";
                    Text(myGame,mFont,ctext);
                    SDL_Delay(1500);
                    SDL_RenderClear(myGame->g_pRenderer);
                    //inventaire[1].lighter= true;
                }
            if(((event.button.x > 544 ) && (event.button.x < 766))&& ((event.button.y > 441)&&(event.button.y <594))){
                    char ctext[] = "Mon Lit.... Bon il est temps je vais dormir ";
                    Text(myGame,mFont,ctext);
                    SDL_Delay(1000);
                    SDL_RenderClear(myGame->g_pRenderer);
                    state->g_bRunning = 3;
                }
        }
        //chambre
    else if ((event.button.button == SDL_BUTTON_LEFT) && (state->g_bRunning==3)){
            SDL_WaitEvent(&event);
            printf("\nSourie en X : %d\n",event.button.x);
            printf("Sourie en Y : %d\n",event.button.y);


            if(((event.button.x > 250 ) && (event.button.x < 379))&& ((event.button.y > 172)&&(event.button.y <429))){
                    SDL_RenderClear(myGame->g_pRenderer);
                    state->g_bRunning = 4;
                }
            if(((event.button.x > 8 ) && (event.button.x < 112))&& ((event.button.y > 367)&&(event.button.y <581))){
                    char ctext[] = "Une veille commode salle... Et vide";
                    Text(myGame,mFont,ctext);
                    SDL_Delay(1500);
                    SDL_RenderClear(myGame->g_pRenderer);

                }
            if(((event.button.x > 544 ) && (event.button.x < 766))&& ((event.button.y > 441)&&(event.button.y <594))){
                    char ctext[] = "j'ai mal dormi hier soir... ";
                    Text(myGame,mFont,ctext);
                    SDL_Delay(1000);
                    SDL_RenderClear(myGame->g_pRenderer);
                }

            }
        //Couloir
    else if ((event.button.button == SDL_BUTTON_LEFT) && (state->g_bRunning==4)){
            SDL_WaitEvent(&event);
            printf("\nSourie en X : %d\n",event.button.x);
            printf("Sourie en Y : %d\n",event.button.y);

            if(((event.button.x > 12 ) && (event.button.x < 88))&& ((event.button.y > 337)&&(event.button.y <550))){
                SDL_RenderClear(myGame->g_pRenderer);
                state->g_bRunning = 3;
            }
            if(((event.button.x > 364 ) && (event.button.x < 468))&& ((event.button.y > 170)&&(event.button.y <288))){
                SDL_RenderClear(myGame->g_pRenderer);
                state->g_bRunning = 5;
            }
            if(((event.button.x > 130 ) && (event.button.x < 280))&& ((event.button.y > 278)&&(event.button.y <460)) && inventaire[1].reception_Key == false ){
                    char ctext[] = "Cettes porte semble fermer a clés....";
                    Text(myGame,mFont,ctext);
                    SDL_Delay(1000);
                    SDL_RenderClear(myGame->g_pRenderer);
            }
            if(((event.button.x > 500 ) && (event.button.x < 789))&& ((event.button.y > 196)&&(event.button.y <324)) && inventaire[1].reception_Key == false ){
                    char ctext[] = "Cette porte semble fermée a clés....";
                    Text(myGame,mFont,ctext);
                    SDL_Delay(1000);
                    SDL_RenderClear(myGame->g_pRenderer);
            }

            if(((event.button.x > 130 ) && (event.button.x < 280))&& ((event.button.y > 278)&&(event.button.y <460)) && inventaire[1].reception_Key == true ){
                SDL_RenderClear(myGame->g_pRenderer);
                state->g_bRunning = 17;
            }
            if(((event.button.x > 500 ) && (event.button.x < 789))&& ((event.button.y > 196)&&(event.button.y <324)) && inventaire[1].reception_Key == true ){
                SDL_RenderClear(myGame->g_pRenderer);
                state->g_bRunning = 17;
            }



        }
 //Reception
    else if ((event.button.button == SDL_BUTTON_LEFT) && (state->g_bRunning==5)){
            SDL_WaitEvent(&event);
            printf("\nSourie en X : %d\n",event.button.x);
            printf("Sourie en Y : %d\n",event.button.y);

            if(((event.button.x > 105 ) && (event.button.x < 221))&& ((event.button.y > 400)&&(event.button.y <600))){
                SDL_RenderClear(myGame->g_pRenderer);
                state->g_bRunning = 4;
            }

            if(((event.button.x > 715 ) && (event.button.x < 800))&& ((event.button.y > 400)&&(event.button.y <710))){
                SDL_RenderClear(myGame->g_pRenderer);
                state->g_bRunning = 6;
            }

            if(((event.button.x > 570 ) && (event.button.x < 665))&& ((event.button.y > 283)&&(event.button.y <600))){
                SDL_RenderClear(myGame->g_pRenderer);
                state->g_bRunning = 11;
            }

            if(((event.button.x > 330 ) && (event.button.x < 430))&& ((event.button.y > 357)&&(event.button.y <468)) && inventaire[1].reception_Key == false ){
                char ctext[] = "Voici des clées... Je pourais ouvire des chambres avec !";
                Text(myGame,mFont,ctext);
                inventaire[1].reception_Key = true;
                SDL_Delay(1000);
                SDL_RenderClear(myGame->g_pRenderer);
            }
            else if(((event.button.x > 330 ) && (event.button.x < 430))&& ((event.button.y > 357)&&(event.button.y <468) && inventaire[1].reception_Key == true)){
                char ctext[] = "Il n'y a plus aucune clées ";
                Text(myGame,mFont,ctext);
                SDL_Delay(1000);
                SDL_RenderClear(myGame->g_pRenderer);
            }
        }
 //Couloir entrer
    else if ((event.button.button == SDL_BUTTON_LEFT) && (state->g_bRunning==6)){
            SDL_WaitEvent(&event);
            printf("\nSourie en X : %d\n",event.button.x);
            printf("Sourie en Y : %d\n",event.button.y);

            if(((event.button.x > 18 ) && (event.button.x < 63))&& ((event.button.y > 444)&&(event.button.y <463))){
                SDL_RenderClear(myGame->g_pRenderer);
                state->g_bRunning = 5;
            }
            if(((event.button.x > 61 ) && (event.button.x < 217))&& ((event.button.y > 310)&&(event.button.y <542))){
                SDL_RenderClear(myGame->g_pRenderer);
                state->g_bRunning = 7;
                printf("\n%d",state->g_bRunning);
            }
            if(((event.button.x > 312 ) && (event.button.x < 466))&& ((event.button.y > 218)&&(event.button.y <431))){
                SDL_RenderClear(myGame->g_pRenderer);
                state->g_bRunning = 8;
                printf("\n%d",state->g_bRunning);
            }
            if(((event.button.x > 562 ) && (event.button.x < 670))&& ((event.button.y > 189)&&(event.button.y <401))){
                SDL_RenderClear(myGame->g_pRenderer);
                state->g_bRunning = 9;
                printf("\n%d",state->g_bRunning);
            }
            if(((event.button.x > 749 ) && (event.button.x < 800))&& ((event.button.y > 390)&&(event.button.y <437))){
                SDL_RenderClear(myGame->g_pRenderer);
                state->g_bRunning = 10;
                printf("\n%d",state->g_bRunning);
            }
            if(((event.button.x > 388 ) && (event.button.x < 488))&& ((event.button.y > 466)&&(event.button.y <566))){
                    char ctext[] = "Un vieux panneau, avec ecrit restaurant";
                    Text(myGame,mFont,ctext);
                    SDL_Delay(1000);
                    SDL_RenderClear(myGame->g_pRenderer);
            }
        }
//Souvenir
    else if ((event.button.button == SDL_BUTTON_LEFT) && (state->g_bRunning==7)){
            SDL_WaitEvent(&event);
            printf("\nSourie en X : %d\n",event.button.x);
            printf("Sourie en Y : %d\n",event.button.y);

            if(((event.button.x > 191 ) && (event.button.x < 287))&& ((event.button.y > 264)&&(event.button.y <312)) && inventaire[1].lighter == false){
                    char ctext[] = "Il y a des briquets avec écrit lake view hôtel, j'en prend un !";
                    inventaire[1].lighter=true;
                    Text(myGame,mFont,ctext);
                    SDL_Delay(1000);
                    SDL_RenderClear(myGame->g_pRenderer);
            }
            else if(((event.button.x > 191 ) && (event.button.x < 287))&& ((event.button.y > 264)&&(event.button.y <312)) && inventaire[1].lighter == true){
                    char ctext[] = "Il y a des briquets avec écrit lake view hôtel, j'en est déja un !";
                    Text(myGame,mFont,ctext);
                    SDL_Delay(1000);
                    SDL_RenderClear(myGame->g_pRenderer);
            }
            if(((event.button.x > 569 ) && (event.button.x < 709))&& ((event.button.y > 178)&&(event.button.y <232))){
                    char ctext[] = "Des Boulles à neiges ... ";
                    Text(myGame,mFont,ctext);
                    SDL_Delay(1000);
                    SDL_RenderClear(myGame->g_pRenderer);
            }
            if(((event.button.x > 718 ) && (event.button.x < 800))&& ((event.button.y > 520)&&(event.button.y <600))){
                SDL_RenderClear(myGame->g_pRenderer);
                state->g_bRunning = 6;
            }

        }
 //Restau
    else if ((event.button.button == SDL_BUTTON_LEFT) && (state->g_bRunning==8)){
            SDL_WaitEvent(&event);
            printf("\nSourie en X : %d\n",event.button.x);
            printf("Sourie en Y : %d\n",event.button.y);

            if(((event.button.x > 718 ) && (event.button.x < 800))&& ((event.button.y > 520)&&(event.button.y <600))){
                SDL_RenderClear(myGame->g_pRenderer);
                state->g_bRunning = 6;
            }
            if(((event.button.x > 166 ) && (event.button.x < 344))&& ((event.button.y > 400)&&(event.button.y <526)) && inventaire[1].Salt == false ){
                    char ctext[] = "Il y a du sel... Mhh, dans le doute j'en prend !";
                    inventaire[1].Salt = true;
                    Text(myGame,mFont,ctext);
                    SDL_Delay(1000);
                    SDL_RenderClear(myGame->g_pRenderer);
            }
            else if (((event.button.x > 166 ) && (event.button.x < 344))&& ((event.button.y > 400)&&(event.button.y <526)) && inventaire[1].Salt == true ){
                    char ctext[] = "Il n'y a rien d'autre";
                    Text(myGame,mFont,ctext);
                    SDL_Delay(1000);
                    SDL_RenderClear(myGame->g_pRenderer);
            }
            if(((event.button.x > 542 ) && (event.button.x < 565))&& ((event.button.y > 450)&&(event.button.y <473)) && doc[1].Doc1 == false ){
                    char ctext[] = "Il y a un papier déchirer, il y a des trucs écrits dessus (note 1) ";
                    doc[1].Doc1 = true;
                    Text(myGame,mFont,ctext);
                    SDL_Delay(1000);
                    SDL_RenderClear(myGame->g_pRenderer);
            }

        }
//Chiotte
    else if ((event.button.button == SDL_BUTTON_LEFT) && (state->g_bRunning==9)){
            SDL_WaitEvent(&event);
            printf("\nSourie en X : %d\n",event.button.x);
            printf("Sourie en Y : %d\n",event.button.y);

            if(((event.button.x > 718 ) && (event.button.x < 800))&& ((event.button.y > 520)&&(event.button.y <600))){
                SDL_RenderClear(myGame->g_pRenderer);
                state->g_bRunning = 6;
            }

        }
//Sortie
    else if ((event.button.button == SDL_BUTTON_LEFT) && (state->g_bRunning==10)){
            SDL_WaitEvent(&event);
            printf("\nSourie en X : %d\n",event.button.x);
            printf("Sourie en Y : %d\n",event.button.y);

            if(((event.button.x > 718 ) && (event.button.x < 800))&& ((event.button.y > 520)&&(event.button.y <600))){
                SDL_RenderClear(myGame->g_pRenderer);
                state->g_bRunning = 6;
            }

            if(((event.button.x > 284 ) && (event.button.x < 460))&& ((event.button.y > 300)&&(event.button.y <430))){
                    char ctext[] = "Je sors pour arrivé dans une ville envahie par la brume, je marche un moment et suis revenus sur mes pas !";
                    Text(myGame,mFont,ctext);
                    SDL_Delay(2000);
                    SDL_RenderClear(myGame->g_pRenderer);
            }

        }
//E2_SallePrincip
    else if ((event.button.button == SDL_BUTTON_LEFT) && (state->g_bRunning==11)){
            SDL_WaitEvent(&event);
            printf("\nSourie en X : %d\n",event.button.x);
            printf("Sourie en Y : %d\n",event.button.y);

            if(((event.button.x > 686 ) && (event.button.x < 800))&& ((event.button.y > 520)&&(event.button.y <600))){
                SDL_RenderClear(myGame->g_pRenderer);
                state->g_bRunning = 5;
            }

            if(((event.button.x > 260 ) && (event.button.x < 320))&& ((event.button.y > 457)&&(event.button.y <514)) && doc[1].Doc5 == false ){
                    char ctext[] = "Il y a un papier déchirer, il y a des trucs écrits dessus (note 5)";
                    doc[1].Doc5 = true;
                    Text(myGame,mFont,ctext);
                    SDL_Delay(1000);
                    SDL_RenderClear(myGame->g_pRenderer);
            }
            if(((event.button.x > 422 ) && (event.button.x < 538))&& ((event.button.y > 300)&&(event.button.y <450))){
                SDL_RenderClear(myGame->g_pRenderer);
                state->g_bRunning = 12;
            }
            if(((event.button.x > 553 ) && (event.button.x < 650))&& ((event.button.y > 300)&&(event.button.y <441))){
                SDL_RenderClear(myGame->g_pRenderer);
                state->g_bRunning = 14;
            }
            if(((event.button.x > 270 ) && (event.button.x < 359))&& ((event.button.y > 300)&&(event.button.y <445))){
                SDL_RenderClear(myGame->g_pRenderer);
                state->g_bRunning = 15;
            }

            if(((event.button.x > 61 ) && (event.button.x < 181))&& ((event.button.y > 300)&&(event.button.y <500)) && inventaire[1].SilverKeyCouloir == false){
                    char ctext[] = "La porte est fermer a clé...";
                    Text(myGame,mFont,ctext);
                    SDL_Delay(1000);
                    SDL_RenderClear(myGame->g_pRenderer);
            }
            else
            if(((event.button.x > 61 ) && (event.button.x < 181))&& ((event.button.y > 300)&&(event.button.y <500)) && inventaire[1].SilverKeyCouloir == true){
                SDL_RenderClear(myGame->g_pRenderer);
                state->g_bRunning = 16;
            }


        }
//CODE
    else if ((event.button.button == SDL_BUTTON_LEFT) && (state->g_bRunning==12)){

            SDL_WaitEvent(&event);
            printf("\nSourie en X : %d\n",event.button.x);
            printf("Sourie en Y : %d\n",event.button.y);


            if(((event.button.x > 738 ) && (event.button.x < 800))&& ((event.button.y > 153)&&(event.button.y <215))){
                SDL_RenderClear(myGame->g_pRenderer);
                state->g_bRunning = 11;
                code[0]=0;
                code[1]=0;
                code[2]=0;
                code[3]=0;
            }

            if(((event.button.x > 343 ) && (event.button.x < 405))&& ((event.button.y > 245)&&(event.button.y <320)) && code[1] == 0 && code[2] == 0 && code [3] ==0 ){
                //printf("8");
                code[0]=8;
            }
            if(((event.button.x > 436 ) && (event.button.x < 490))&& ((event.button.y > 364)&&(event.button.y <430))&& code[2] == 0 && code [3] ==0){
                //printf("6");
                code[1]=6;
            }
            if(((event.button.x > 430 ) && (event.button.x < 500))&& ((event.button.y > 472)&&(event.button.y <562)) && code [3] ==0 ){
                //printf("3");
                code[2]=3;
            }
            if(((event.button.x > 257 ) && (event.button.x < 315))&& ((event.button.y > 361)&&(event.button.y <430))){
                //printf("4");
                code[3]=4;
            }

            if (code[0]==8 && code[1]==6 && code [2]==3 && code[3]==4){
                SDL_RenderClear(myGame->g_pRenderer);
                state->g_bRunning = 13;
            }

        }
//Stockage
    else if ((event.button.button == SDL_BUTTON_LEFT) && (state->g_bRunning==13)){
            SDL_WaitEvent(&event);
            printf("\nSourie en X : %d\n",event.button.x);
            printf("Sourie en Y : %d\n",event.button.y);

            if(((event.button.x > 593 ) && (event.button.x < 643))&& ((event.button.y > 530)&&(event.button.y <558))){
                SDL_RenderClear(myGame->g_pRenderer);
                state->g_bRunning = 11;
            }
            if(((event.button.x > 14 ) && (event.button.x < 240))&& ((event.button.y > 303)&&(event.button.y <590))){
                    char ctext[] = "de nombreuses armoires contenant des denrées alimentaires en conserve";
                    Text(myGame,mFont,ctext);
                    SDL_Delay(1500);
                    SDL_RenderClear(myGame->g_pRenderer);
            }
            if(((event.button.x > 352 ) && (event.button.x < 466))&& ((event.button.y > 400)&&(event.button.y <490)) && inventaire[1].GoldKey201 == false){
                    char ctext[] = "Il y a une clé en or, avec écrit 201...";
                    inventaire[1].GoldKey201 = true;
                    Text(myGame,mFont,ctext);
                    SDL_Delay(1000);
                    SDL_RenderClear(myGame->g_pRenderer);
            }
        }
//DIRECTION
    else if ((event.button.button == SDL_BUTTON_LEFT) && (state->g_bRunning==14)){
            SDL_WaitEvent(&event);
            printf("\nSourie en X : %d\n",event.button.x);
            printf("Sourie en Y : %d\n",event.button.y);

            if(((event.button.x > 557 ) && (event.button.x < 800))&& ((event.button.y > 528)&&(event.button.y <600))){
                SDL_RenderClear(myGame->g_pRenderer);
                state->g_bRunning = 11;
            }
            if(((event.button.x > 390 ) && (event.button.x < 458))&& ((event.button.y > 414)&&(event.button.y <482)) && doc[1].Doc3 == false ){
                    char ctext[] = "Il y a une note, il y a des trucs écrits dessus (note 3)";
                    doc[1].Doc3 = true;
                    Text(myGame,mFont,ctext);
                    SDL_Delay(1000);
                    SDL_RenderClear(myGame->g_pRenderer);
            }
            if(((event.button.x > 70 ) && (event.button.x < 149))&& ((event.button.y > 322)&&(event.button.y <410)) && inventaire[1].SilverKeyCouloir == false){
                    char ctext[] = "Il y a une clé en argent, avec écrit couloir...";
                    inventaire[1].SilverKeyCouloir = true;
                    Text(myGame,mFont,ctext);
                    SDL_Delay(1000);
                    SDL_RenderClear(myGame->g_pRenderer);
            }
        }
//Biblioth
    else if ((event.button.button == SDL_BUTTON_LEFT) && (state->g_bRunning==15)){
            SDL_WaitEvent(&event);
            printf("\nSourie en X : %d\n",event.button.x);
            printf("Sourie en Y : %d\n",event.button.y);

            if(((event.button.x > 557 ) && (event.button.x < 800))&& ((event.button.y > 528)&&(event.button.y <600))){
                SDL_RenderClear(myGame->g_pRenderer);
                state->g_bRunning = 11;
            }

            if(((event.button.x > 392 ) && (event.button.x < 452))&& ((event.button.y > 411)&&(event.button.y <500))&& doc[1].Doc6 == false){
                 char ctext[] = "Il y a un livre étrange (note 6)";
                    doc[1].Doc6 = true;
                    Text(myGame,mFont,ctext);
                    SDL_Delay(1000);
                    SDL_RenderClear(myGame->g_pRenderer);
            }

            if(((event.button.x > 92 ) && (event.button.x < 360))&& ((event.button.y > 227)&&(event.button.y <540))){
                 char ctext[] = "Il y a des tas de livres... Qui parle d'esprit ?";
                    doc[1].Doc6 = true;
                    Text(myGame,mFont,ctext);
                    SDL_Delay(1000);
                    SDL_RenderClear(myGame->g_pRenderer);
            }
        }
//CouloirF2
    else if ((event.button.button == SDL_BUTTON_LEFT) && (state->g_bRunning==16)){
            SDL_WaitEvent(&event);
            printf("\nSourie en X : %d\n",event.button.x);
            printf("Sourie en Y : %d\n",event.button.y);

            if(((event.button.x > 742 ) && (event.button.x < 800))&& ((event.button.y > 530)&&(event.button.y <600))){
                SDL_RenderClear(myGame->g_pRenderer);
                state->g_bRunning = 11;
            }
            if(((event.button.x > 35 ) && (event.button.x < 113))&& ((event.button.y > 425)&&(event.button.y <600))&& inventaire[1].reception_Key == true){
                SDL_RenderClear(myGame->g_pRenderer);
                state->g_bRunning = 19;
                printf("%d",state->g_bRunning);
            }else
            if (((event.button.x > 35 ) && (event.button.x < 113))&& ((event.button.y > 425)&&(event.button.y <600))&& inventaire[1].reception_Key == false){
                    char ctext[] = "La porte est fermée....";
                    Text(myGame,mFont,ctext);
                    SDL_Delay(1000);
                    SDL_RenderClear(myGame->g_pRenderer);
            }
            if(((event.button.x > 135 ) && (event.button.x < 213))&& ((event.button.y > 327)&&(event.button.y <515))&& inventaire[1].reception_Key == true){
                SDL_RenderClear(myGame->g_pRenderer);
                state->g_bRunning = 20;
                printf("%d",state->g_bRunning);
            }else
            if(((event.button.x > 135 ) && (event.button.x < 213))&& ((event.button.y > 327)&&(event.button.y <515))&& inventaire[1].reception_Key == false){
                    char ctext[] = "La porte est fermée....";
                    Text(myGame,mFont,ctext);
                    SDL_Delay(1000);
                    SDL_RenderClear(myGame->g_pRenderer);
            }
            if(((event.button.x > 229 ) && (event.button.x < 300))&& ((event.button.y > 250)&&(event.button.y <448))&& inventaire[1].reception_Key == true){
                SDL_RenderClear(myGame->g_pRenderer);
                state->g_bRunning = 21;
                printf("%d",state->g_bRunning);
            }else if(((event.button.x > 229 ) && (event.button.x < 300))&& ((event.button.y > 250)&&(event.button.y <448))&& inventaire[1].reception_Key == false){
                    char ctext[] = "La porte est fermée....";
                    Text(myGame,mFont,ctext);
                    SDL_Delay(1000);
                    SDL_RenderClear(myGame->g_pRenderer);

            }
            if(((event.button.x > 605 ) && (event.button.x < 728))&& ((event.button.y > 390)&&(event.button.y <570))&& inventaire[1].reception_Key == true){
                SDL_RenderClear(myGame->g_pRenderer);
                state->g_bRunning = 22;
                printf("%d",state->g_bRunning);
            }else if(((event.button.x > 605 ) && (event.button.x < 728))&& ((event.button.y > 390)&&(event.button.y <570))&& inventaire[1].reception_Key == false){
                    char ctext[] = "La porte est fermée....";
                    Text(myGame,mFont,ctext);
                    SDL_Delay(1000);
                    SDL_RenderClear(myGame->g_pRenderer);

            }

            if(((event.button.x > 229 ) && (event.button.x < 300))&& ((event.button.y > 250)&&(event.button.y <448))&& inventaire[1].reception_Key == true){
                SDL_RenderClear(myGame->g_pRenderer);
                state->g_bRunning = 21;
                printf("%d",state->g_bRunning);
            }

            if(((event.button.x > 356 ) && (event.button.x < 444))&& ((event.button.y > 212)&&(event.button.y <340)) && inventaire[1].GoldKey201 == false ){
                    char ctext[] = "Une porte... Elle est fermée à clé, c'est étrange j'entends des bruits à l'intérieur";
                    Text(myGame,mFont,ctext);
                    SDL_Delay(1000);
                    SDL_RenderClear(myGame->g_pRenderer);
            }
            else
            if(((event.button.x > 356 ) && (event.button.x < 444))&& ((event.button.y > 212)&&(event.button.y <340)) && inventaire[1].GoldKey201 == true ){
                SDL_RenderClear(myGame->g_pRenderer);
                state->g_bRunning = 18;
            }
        }
//ChambreF1
    else if ((event.button.button == SDL_BUTTON_LEFT) && (state->g_bRunning==17)){
            SDL_WaitEvent(&event);
            printf("\nSourie en X : %d\n",event.button.x);
            printf("Sourie en Y : %d\n",event.button.y);

            if(((event.button.x > 240 ) && (event.button.x < 366))&& ((event.button.y > 174)&&(event.button.y <427))){
                SDL_RenderClear(myGame->g_pRenderer);
                state->g_bRunning = 4;
            }
            if(((event.button.x > 544 ) && (event.button.x < 766))&& ((event.button.y > 441)&&(event.button.y <594))){
                    char ctext[] = "Un lit... Il n'y a rien de plus ";
                    Text(myGame,mFont,ctext);
                    SDL_Delay(1000);
                    SDL_RenderClear(myGame->g_pRenderer);
                }
        }
//Chambre219
    else if ((event.button.button == SDL_BUTTON_LEFT) && (state->g_bRunning==19)){
            SDL_WaitEvent(&event);
            printf("\nSourie en X : %d\n",event.button.x);
            printf("Sourie en Y : %d\n",event.button.y);

            if(((event.button.x > 240 ) && (event.button.x < 366))&& ((event.button.y > 174)&&(event.button.y <335))){
                SDL_RenderClear(myGame->g_pRenderer);
                state->g_bRunning = 16;
            }
            if(((event.button.x > 207 ) && (event.button.x < 307))&& ((event.button.y > 401)&&(event.button.y <465))&& doc[1].Doc4 == false){
                 char ctext[] = "Il y a une notes (note 4)";
                    doc[1].Doc4 = true;
                    Text(myGame,mFont,ctext);
                    SDL_Delay(1000);
                    SDL_RenderClear(myGame->g_pRenderer);
            }

        }
//Chambre220
    else if ((event.button.button == SDL_BUTTON_LEFT) && (state->g_bRunning==20)){
            SDL_WaitEvent(&event);
            printf("\nSourie en X : %d\n",event.button.x);
            printf("Sourie en Y : %d\n",event.button.y);

            if(((event.button.x > 240 ) && (event.button.x < 366))&& ((event.button.y > 174)&&(event.button.y <427))){
                SDL_RenderClear(myGame->g_pRenderer);
                state->g_bRunning = 16;
            }
            if(((event.button.x > 140 ) && (event.button.x < 200))&& ((event.button.y > 280)&&(event.button.y <374))&& doc[1].Doc2 == false){
                 char ctext[] = "Il y a une notes (note 2)";
                    doc[1].Doc2 = true;
                    Text(myGame,mFont,ctext);
                    SDL_Delay(1000);
                    SDL_RenderClear(myGame->g_pRenderer);
            }
            if(((event.button.x > 544 ) && (event.button.x < 766))&& ((event.button.y > 441)&&(event.button.y <363))){
                    char ctext[] = "Un lit... Il n'y a rien de plus ";
                    printf("Clik sur le lit ! \n");
                    Text(myGame,mFont,ctext);
                    SDL_Delay(1000);
                    SDL_RenderClear(myGame->g_pRenderer);
                }
        }
//Chambre211
    else if ((event.button.button == SDL_BUTTON_LEFT) && (state->g_bRunning==21)){
            SDL_WaitEvent(&event);
            printf("\nSourie en X : %d\n",event.button.x);
            printf("Sourie en Y : %d\n",event.button.y);

            if(((event.button.x > 240 ) && (event.button.x < 366))&& ((event.button.y > 174)&&(event.button.y <427))){
                SDL_RenderClear(myGame->g_pRenderer);
                state->g_bRunning = 16;
            }
            if(((event.button.x > 544 ) && (event.button.x < 766))&& ((event.button.y > 441)&&(event.button.y <594))){
                    char ctext[] = "Un lit... Il n'y a rien de plus ";
                    Text(myGame,mFont,ctext);
                    SDL_Delay(1000);
                    SDL_RenderClear(myGame->g_pRenderer);
                }

        }
//Chambre216
    else if ((event.button.button == SDL_BUTTON_LEFT) && (state->g_bRunning==22)){
            SDL_WaitEvent(&event);
            printf("\nSourie en X : %d\n",event.button.x);
            printf("Sourie en Y : %d\n",event.button.y);

            if(((event.button.x > 240 ) && (event.button.x < 366))&& ((event.button.y > 174)&&(event.button.y <427))){
                SDL_RenderClear(myGame->g_pRenderer);
                state->g_bRunning = 16;
            }
            if(((event.button.x > 505 ) && (event.button.x < 780))&& ((event.button.y > 290)&&(event.button.y <500))){
                SDL_RenderClear(myGame->g_pRenderer);
                state->g_bRunning = 23;
            }
    }
    else if ((event.button.button == SDL_BUTTON_LEFT) && (state->g_bRunning==23)){
            SDL_WaitEvent(&event);
            printf("\nSourie en X : %d\n",event.button.x);
            printf("Sourie en Y : %d\n",event.button.y);

            if(((event.button.x > 240 ) && (event.button.x < 366))&& ((event.button.y > 174)&&(event.button.y <427))){
                SDL_RenderClear(myGame->g_pRenderer);
                state->g_bRunning = 16;
            }
            if(((event.button.x > 390 ) && (event.button.x < 466))&& ((event.button.y > 350)&&(event.button.y <448))&& inventaire[1].gasoline == false){
                    char ctext[] = "De l'essence... Quelqu’un voulait mettre le feu ?";
                    inventaire[1].gasoline = true;
                    Text(myGame,mFont,ctext);
                    SDL_Delay(2000);
                    SDL_RenderClear(myGame->g_pRenderer);
            }
    }
//SALLE DE FIN
    else if ((event.button.button == SDL_BUTTON_LEFT) && (state->g_bRunning==18)){
            SDL_WaitEvent(&event);
            printf("\nSourie en X : %d\n",event.button.x);
            printf("Sourie en Y : %d\n",event.button.y);

            if(((event.button.x > 557 ) && (event.button.x < 800))&& ((event.button.y > 528)&&(event.button.y <600))){
                SDL_RenderClear(myGame->g_pRenderer);
                state->g_bRunning = 16;
            }
            if(((event.button.x > 351 ) && (event.button.x < 614))&& ((event.button.y > 431)&&(event.button.y <600))&& inventaire[1].lighter == true && inventaire[1].gasoline == true && inventaire[1].Salt == true){
                if(doc[1].Doc1 == true && doc[1].Doc2 == true && doc[1].Doc3 == true && doc[1].Doc4 == true && doc[1].Doc5 == true&& doc[1].Doc6 == true){
                    state->g_bRunning = 24;//Vraie Fin
                }else{
                    state->g_bRunning = 25;;//Fin
                }

            }else
            if(((event.button.x > 351 ) && (event.button.x < 614))&& ((event.button.y > 431)&&(event.button.y <600))){
                char ctext[] = "C'est étrange je me sens tellement mal ici...  ";
                Text(myGame,mFont,ctext);
                SDL_Delay(1000);
                SDL_RenderClear(myGame->g_pRenderer);
            }
        }



    }
}


