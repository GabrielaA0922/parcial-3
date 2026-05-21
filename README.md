Dungeon Game en C++ con CMake

Este proyecto consiste en el desarrollo de un videojuego tipo dungeon (mazmorra) en consola, implementado en lenguaje C++. El objetivo principal fue aplicar conceptos de programación estructurada y modular, utilizando múltiples archivos fuente, así como herramientas modernas de construcción como CMake.

El juego se ejecuta en consola y permite al usuario controlar un personaje dentro de un mapa compuesto por varias habitaciones conectadas. A lo largo del recorrido, el jugador debe evitar enemigos, recolectar una llave y encontrar la salida para ganar la partida.

🎮 Descripción del funcionamiento

El jugador inicia en una posición fija dentro del mapa y puede moverse utilizando las teclas W, A, S, D, que corresponden a las direcciones arriba, izquierda, abajo y derecha respectivamente.

Dentro del mapa existen distintos elementos:

Jugador (P): personaje controlado por el usuario Enemigo perseguidor (E): se mueve en dirección al jugador Enemigo patrulla (M): se desplaza de manera horizontal automática Llave (K): objeto necesario para ganar Puerta (D): salida del mapa

El objetivo del juego es recolectar la llave y luego dirigirse a la puerta. Si el jugador intenta entrar a la puerta sin la llave, no podrá ganar. Si un enemigo entra en la misma posición que el jugador, el juego termina en derrota.

🧱 Estructura del proyecto

El programa está organizado siguiendo una arquitectura modular, separando las responsabilidades en distintos archivos:

main.cpp: punto de entrada del programa game.cpp / game.h: lógica principal del juego player.cpp / player.h: manejo del jugador enemy.cpp / enemy.h: comportamiento de enemigos map.cpp / map.h: creación y dibujo del mapa

Además, se utiliza un archivo CMakeLists.txt para gestionar la compilación del proyecto.

⚙️ Compilación y ejecución

El proyecto puede compilarse utilizando CMake desde la terminal o mediante Visual Studio.

En terminal: mkdir build cd build cmake .. cmake --build .

Luego ejecutar:

game.exe

Este proyecto demuestra la capacidad de:

Diseñar un programa modular en C++ Implementar lógica básica de videojuegos Manejar múltiples archivos y responsabilidades Utilizar CMake como sistema de construcción Aplicar buenas prácticas de programación
