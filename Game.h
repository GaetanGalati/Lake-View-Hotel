#ifndef GAME_H_INCLUDED
#define GAME_H_INCLUDED
#define SCREEN_WIDTH 800
#define SCREEN_HEIGHT 600

typedef struct game{


     SDL_Window *g_pWindow;
     SDL_Renderer *g_pRenderer;
     SDL_Texture *g_texture;
     SDL_Surface *g_surface;


}game;

typedef struct gameState{

    int g_bRunning;


}gameState;

typedef struct font{

    TTF_Font *g_font;

}font;


typedef struct coordonnees{

    double x;
    double y;



}coordonnees;

typedef enum BOOL{true=1,false=0,InHead=-1}BOOL;

typedef struct Inventory{

    BOOL GoldKey201;
    BOOL SilverKeyCouloir;
    BOOL gasoline ;
    BOOL lighter;
    BOOL Salt;
    BOOL reception_Key;

}Inventory;

typedef struct Document{

    BOOL Doc1;
    BOOL Doc2;
    BOOL Doc3 ;
    BOOL Doc4;
    BOOL Doc5;
    BOOL Doc6;

}Document;
FILE* fopen(const char* save, const char* a);
char* fgets(char* chaine, int nbreDeCaracteresALire, FILE* pointeurSurFichier);
extern void SaveGame(FILE* save,gameState *state,game *myGame,Document Doc[], Inventory Inventaire[]);
extern void loadGame(FILE* save,gameState *state,game *myGame,Document Doc[], Inventory Inventaire[]);
extern int init(char *title, int xpos,int ypos,int height, int width,int flags,game *myGame,font *mFont);
extern int Text(game *myGame,font *mFont, char ctext[200]);
extern void handleEvents(gameState *state,game *myGame,font *mFont,Inventory inventaire[],Document doc[], int *savesate,int *nNote,int code[]);
extern void writeSDL(game *myGame,font mFont);
extern int Mix_OpenAudio(int frequency, Uint16 format, int channels, int chunksize);





#endif // GAME_H_INCLUDED
