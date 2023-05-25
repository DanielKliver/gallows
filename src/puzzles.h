#ifndef PUZZLES_H
#define PUZZLES_H
#include <stdio.h>
#include <time.h>
#include <string.h>
#include <stdlib.h>
#include <ctype.h>

char *puzzles(int number, int print);
typedef struct
{
		int life;
			int puzzle_num;
				char *duck;
					char *duck_guess;

} My_game;



#endif //PUZZLES_H
