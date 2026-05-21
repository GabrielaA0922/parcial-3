#ifndef ENEMY_H
#define ENEMY_H

struct Enemy
{
    int x;
    int y;
    int type;
    int dir;
};

void initEnemy(Enemy* e, int x, int y, int type);
void moveEnemyChaser(Enemy* e, int px, int py, char map[30][30]);
void moveEnemyPatrol(Enemy* e, char map[30][30]);

#endif
