#ifndef SAVE&LOAD_H_INCLUDED
#define SAVE&LOAD_H_INCLUDED

FILE* fopen(const char* save, const char* a);
char* fgets(char* chaine, int nbreDeCaracteresALire, FILE* pointeurSurFichier);
extern void SaveGame(FILE* save,gameState *state,game *myGame,Document Doc[], Inventory Inventaire[]);
extern void loadGame(FILE* save,gameState *state,game *myGame,Document Doc[], Inventory Inventaire[]);
#endif // SAVE&LOAD_H_INCLUDED
