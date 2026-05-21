#include <iostream>
#include <cstdlib>
#include "../include/game.h"
#include "../include/player.h"
#include "../include/enemy.h"
#include "../include/map.h"

void runGame()
{
    char map[30][30];

    Player player;
    Enemy e1;
    Enemy e2;

    initMap(map);
    placeRooms(map);

    initPlayer(&player);
    initEnemy(&e1, 8, 8, 0);
    initEnemy(&e2, 20, 20, 1);

    char input;

    while (1)
    {
        system("cls");

        drawMap(map, player.x, player.y, e1.x, e1.y, e2.x, e2.y);

        std::cout << "Llave: " << player.hasKey << std::endl;
        std::cout << "Movimiento (w,a,s,d): ";
        std::cin >> input;

        movePlayer(&player, input, map);

        if (map[player.y][player.x] == 'K')
        {
            player.hasKey = 1;
            map[player.y][player.x] = '.';
        }

        if (map[player.y][player.x] == 'D')
        {
            if (player.hasKey)
            {
                std::cout << "GANASTE!" << std::endl;
                break;
            }
        }

        moveEnemyChaser(&e1, player.x, player.y, map);
        moveEnemyPatrol(&e2, map);

        if ((player.x == e1.x && player.y == e1.y) ||
            (player.x == e2.x && player.y == e2.y))
        {
            std::cout << "PERDISTE!" << std::endl;
            break;
        }
    }
}
