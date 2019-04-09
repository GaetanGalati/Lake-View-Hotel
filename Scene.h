#ifndef SCENE_H_INCLUDED
#define SCENE_H_INCLUDED
    extern void PlayerInventory(gameState *state,game *myGame,Inventory inventaire[],int *savesate);
    extern void playerdocument(gameState *state,game *myGame,Inventory inventaire[],int *savesate);
    extern void Note1(game *myGame,gameState state);
    extern void Note2(game *myGame,gameState state);
    extern void Note3(game *myGame,gameState state);
    extern void Note4(game *myGame,gameState state);
    extern void Note5(game *myGame,gameState state);
    extern void Note6(game *myGame,gameState state);
    extern void intro(game *myGame,gameState state);

    extern void MainScreen(game *myGame,gameState state);
    extern void Scene1(game *myGame,gameState state);
    extern void Scene2(game *myGame,gameState state);

#endif // SCENE_H_INCLUDED
