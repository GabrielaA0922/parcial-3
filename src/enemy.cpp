#include "../include/enemy.h"

void initEnemy(Enemy* e, int x, int y, int type)
{
    e->x = x;
    e->y = y;
    e->type = type;
    e->dir = 1;
}

void moveEnemyChaser(Enemy* e, int px, int py, char map[30][30])
{
    int dx = 0;
    int dy = 0;

    if (px < e->x) dx = -1;
    if (px > e->x) dx = 1;
    if (py < e->y) dy = -1;
    if (py > e->y) dy = 1;

    if (map[e->y + dy][e->x + dx] != '#')
    {
        e->x += dx;
        e->y += dy;
    }
}

void moveEnemyPatrol(Enemy* e, char map[30][30])
{
    if (map[e->y][e->x + e->dir] == '#')
        e->dir *= -1;
    else
        e->x += e->dir;
}
