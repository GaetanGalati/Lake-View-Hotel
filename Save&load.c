#include <stdio.h>
#include <stdlib.h>

#include <SDL.h>
#include <SDL_image.h>
#include <SDL_ttf.h>
#include <SDL_mixer.h>
#include <stdio.h>
#include "Game.h"

void SaveGame(FILE* save,gameState *state,game *myGame,Document Doc[], Inventory Inventaire[]){

    save = fopen("save.txt", "w+");
    printf("Fichier de save fait");
    fprintf(save,"%d ",state->g_bRunning);
    fprintf(save,"%d ",Doc[1].Doc1);
    fprintf(save,"%d ",Doc[1].Doc2);
    fprintf(save,"%d ",Doc[1].Doc3);
    fprintf(save,"%d ",Doc[1].Doc4);
    fprintf(save,"%d ",Doc[1].Doc5);
    fprintf(save,"%d ",Doc[1].Doc6);
    fprintf(save,"%d ",Inventaire[1].gasoline);
    fprintf(save,"%d ",Inventaire[1].GoldKey201);
    fprintf(save,"%d ",Inventaire[1].lighter);
    fprintf(save,"%d ",Inventaire[1].reception_Key);
    fprintf(save,"%d ",Inventaire[1].Salt);
    fprintf(save,"%d ",Inventaire[1].SilverKeyCouloir);
    fclose(save);

}



void loadGame(FILE* save,gameState *state,game *myGame,Document Doc[], Inventory Inventaire[]){

    int score[3] = {0}; // Tableau des 3 meilleurs scores

    save = fopen("save.txt", "r");

    if (save != NULL)
    {
        fscanf(save, "%d %d %d %d %d %d %d %d %d %d %d %d %d",
               &state->g_bRunning,
               &Doc[1].Doc1,
               &Doc[1].Doc2,
               &Doc[1].Doc3,
               &Doc[1].Doc4,
               &Doc[1].Doc5,
               &Inventaire[1].gasoline,
               &Inventaire[1].GoldKey201,
               &Inventaire[1].lighter,
               &Inventaire[1].reception_Key,
               &Inventaire[1].Salt,
               &Inventaire[1].SilverKeyCouloir);

        fclose(save);
    }


}
