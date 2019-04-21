#include <stdio.h>
#include <stdlib.h>

#include <SDL.h>
#include <SDL_image.h>
#include <SDL_ttf.h>
#include <SDL_mixer.h>
#include <stdio.h>
#include "Game.h"
//+++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++
//Description : Procédure qui sauvegarde l'état du jeu, l'inventaire et les document dans un fichier txt
//
//Entrées : l'état du jeu, l'inventaire, les document, le fichiers
//
//Sortie : creation de save.txt
//
//Notes : X
//+++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++
void SaveGame(FILE* save,gameState *state,game *myGame,Document Doc[], Inventory Inventaire[]){

    save = fopen("save.txt", "w+");
    printf("Fichier de save fait");
    fprintf(save,"%d ",state->g_bRunning);//etat du jeu
    fprintf(save,"%d ",Doc[1].Doc1);//Document 1 a 6
    fprintf(save,"%d ",Doc[1].Doc2);
    fprintf(save,"%d ",Doc[1].Doc3);
    fprintf(save,"%d ",Doc[1].Doc4);
    fprintf(save,"%d ",Doc[1].Doc5);
    fprintf(save,"%d ",Doc[1].Doc6);
    fprintf(save,"%d ",Inventaire[1].GoldKey201);//Chaque objet de l'inentaire
    fprintf(save,"%d ",Inventaire[1].lighter);
    fprintf(save,"%d ",Inventaire[1].reception_Key);
    fprintf(save,"%d ",Inventaire[1].Salt);
    fprintf(save,"%d ",Inventaire[1].SilverKeyCouloir);
    fprintf(save,"%d ",Inventaire[1].gasoline);
    fclose(save);//fermeture

}


//+++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++
//Description : procédure qui va lire save.txt et affecter les valeurs lue aux variables
//
//Entrées : l'état du jeu, l'inventaire, les document, le fichiers
//
//Sortie : lécture de save.txt
//
//Notes : X
//+++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++
void loadGame(FILE* save,gameState *state,game *myGame,Document Doc[], Inventory Inventaire[]){

    save = fopen("save.txt", "r");
    printf("Chargement fait\n");
    int nState = 0;
    if (save != NULL)
    {
        fscanf(save, "%d %d %d %d %d %d %d %d %d %d %d %d %d",
               &nState,
               &Doc[1].Doc1,
               &Doc[1].Doc2,
               &Doc[1].Doc3,
               &Doc[1].Doc4,
               &Doc[1].Doc5,
               &Doc[1].Doc6,
               &Inventaire[1].GoldKey201,
               &Inventaire[1].lighter,
               &Inventaire[1].reception_Key,
               &Inventaire[1].Salt,
               &Inventaire[1].SilverKeyCouloir,
               &Inventaire[1].gasoline);//Lecture & affectation

        state->g_bRunning = nState;
        fclose(save);
    }
}
