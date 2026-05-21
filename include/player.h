#ifndef PLAYER_H
#define PLAYER_H

struct Player
{
    int x;
    int y;
    int hasKey;
};

void initPlayer(Player* p);
void movePlayer(Player* p, char input, char map[30][30]);

#endif
