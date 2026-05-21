#include "../include/player.h"

void initPlayer(Player* p)
{
    p->x = 1;
    p->y = 1;
    p->hasKey = 0;
}

void movePlayer(Player* p, char input, char map[30][30])
{
    int nx = p->x;
    int ny = p->y;

    if (input == 'w') ny--;
    if (input == 's') ny++;
    if (input == 'a') nx--;
    if (input == 'd') nx++;

    if (map[ny][nx] != '#')
    {
        p->x = nx;
        p->y = ny;
    }
}
