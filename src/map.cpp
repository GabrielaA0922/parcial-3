#include <iostream>
#include "../include/map.h"

void initMap(char map[30][30])
{
    int i;
    int j;

    for (i = 0; i < 30; i++)
    {
        for (j = 0; j < 30; j++)
        {
            map[i][j] = '#';
        }
    }
}

void placeRooms(char map[30][30])
{
    int i;
    int j;

    for (i = 2; i < 10; i++)
        for (j = 2; j < 10; j++)
            map[i][j] = '.';

    for (i = 2; i < 10; i++)
        for (j = 15; j < 25; j++)
            map[i][j] = '.';

    for (i = 15; i < 25; i++)
        for (j = 2; j < 10; j++)
            map[i][j] = '.';

    for (i = 15; i < 25; i++)
        for (j = 15; j < 25; j++)
            map[i][j] = '.';

    map[5][10] = '.';
    map[20][10] = '.';
    map[10][5] = '.';
    map[10][20] = '.';

    map[3][3] = 'K'; // llave
    map[22][22] = 'D'; // puerta
}

void drawMap(char map[30][30], int px, int py, int ex1, int ey1, int ex2, int ey2)
{
    int i;
    int j;

    for (i = 0; i < 30; i++)
    {
        for (j = 0; j < 30; j++)
        {
            if (i == py && j == px)
                std::cout << 'P';
            else if (i == ey1 && j == ex1)
                std::cout << 'E';
            else if (i == ey2 && j == ex2)
                std::cout << 'M';
            else
                std::cout << map[i][j];
        }
        std::cout << std::endl;
    }
}
