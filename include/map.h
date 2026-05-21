#ifndef MAP_H
#define MAP_H

void initMap(char map[30][30]);
void drawMap(char map[30][30], int px, int py, int ex1, int ey1, int ex2, int ey2);
void placeRooms(char map[30][30]);

#endif
