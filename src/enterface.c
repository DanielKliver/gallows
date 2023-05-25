#include <stdio.h>
#include <time.h>
#include <string.h>
#include <stdlib.h>
#include <ctype.h>
#include <enterface.h>
#include <puzzles.h>

void print_duck_guess(My_game* we_have)
{
	printf("\n\nYour word: ");
	for(int i = 0; i<sizeof(we_have->duck_guess-2); i++)
	{
		if(we_have->duck_guess[i] == 0)
		{
			printf(" ");
		}
		else
		{
			printf("%c", we_have->duck_guess[i]);
		}
	}
	printf("\n");
}

int enteface(My_game* we_have)
{
	switch(we_have->life)
	{
		case 0:
			printf("Your lifes: 0...\n");
			printf("YOU DEAD.\n");
			printf("\t______\n");
			printf("\t|/  |\n");
			printf("\t|   O\n");
			printf("\t|  /|\\\n");
			printf("\t|   |\n");
			printf("\t|\n");
			printf("\n\n\n");
			break;
		case 1:
			printf("Your lifes: 1.\n");
			printf("\n");
			printf("\t______\n");
			printf("\t|/  \n");
			printf("\t|   \n");
			printf("\t|   O\n");
			printf("\t|  /|\\\n");
			printf("\t|   |\n");
			break;
		case 2:
			printf("Your lifes: 2.\n");
			printf("\n");
			printf("\t\n");
			printf("\t|  \n");
			printf("\t|   \n");
			printf("\t|   O\n");
			printf("\t|  /|\\\n");
			printf("\t|   |\n");
			break;
		case 3:
			printf("Your lifes: 3.\n");
			printf("\n");
			printf("\t        (X-X)\n");
			printf("\t  \n");
			printf("\t   \n");
			printf("\t   O\n");
			printf("\t  /|\\\n");
			printf("\t   |\n");
			break;
		case 4:
			printf("Your lifes: 4.\n");
			printf("\n");
			printf("\t        (OзO)\n");
			printf("\t  \n");
			printf("\t   \n");
			printf("\t   O\n");
			printf("\t  /|\\\n");
			printf("\t   |\n");
			printf("\n\n\n");
			break;
		default:
			printf("Are you cheater?\n");
			return -1;
	}
	return 0;

}
