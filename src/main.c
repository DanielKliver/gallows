#include <stdio.h>
#include <time.h>
#include <string.h>
#include <stdlib.h>
#include <ctype.h>

typedef struct
{
	int life;
	int puzzle_num;
	char *duck;
	char *duck_guess;

} My_game;

int errors(int error_num)
{
	switch(error_num)
	{
		case 1:
			printf("Ошибка в номере загадки.\n");
			break;
		default:
			printf("Хэй, такакя ошибка вообще бывает?\n");
			break;
	}
	return -1;
}

void strlower(char* string)
{
	for(int i = 0; i<strlen(string); i++)
	{
		string[i] = tolower(string[i]);
	}
}

char *puzzles(int number, int print)
{
	char *duck;
	duck = malloc(20);
	switch (number)
	{
		case 1:
			if(print == 1)
			{
				printf("Under the mountain is a pony, in the mountain - a wooden thing.\n");
			}
			else
			{
				duck = "sled";
			}
			break;
		case 2:
			if(print == 1)
			{
				printf("Flowers fall from the sky onto trees and bushes. White, fluffy, but not fragrant.\\n");
			}
			else
			{
				duck = "snow";
			}
			break;
		case 3:
			if(print == 1)
			{
				printf("A red maiden sits in a dungeon and her braid is on the street.\n");
			}
			else
			{
				duck = "carrot";
			}
			break;
		case 4:
			if(print == 1)
			{
				printf("In winter - a star, in spring - water.\n");
			}
			else
			{
				duck = "snowflake";
			}
			break;
		case 5:
			if(print == 1)
			{
				printf("Who is angry and hungry in cold winter?\n");
			}
			else
			{
				duck = "wolf";
			}
			break;
		case 6:
			if(print == 1)
			{
				printf("It doesn't bark, doesn't bite, but doesn't let you into the house.\n");
			}
			else
			{
				duck = "lock";
			}
			break;
		case 7:
			if(print == 1)
			{
				printf("A hundred clothes with no fasteners.\n");
			}
			else
			{
				duck = "cabbage";
			}
			break;
		case 8:
			if(print == 1)
			{
				printf("An old man sits dressed in a fur coat, whoever undresses him sheds tears.\n");
			}
			else
			{
				duck = "onion";
			}
			break;
		case 9:
			if(print == 1)
			{
				printf("Little white pigs lay on the ridges.\n");
			}
			else
			{
				duck = "zucchini";
			}
			break;
		case 10:
			if(print == 1)
			{
				printf("It shines, it sparkles, it doesn't flatter anyone.\n");
			}
			else
			{
				duck = "mirror";
			}
			break;
		case 11:
			if(print == 1)
			{
				printf("A poor fellow hides in the board - only his cap is visible.\n");
			}
			else
			{
				duck = "nail";
			}
			break;
		case 12:
			if(print == 1)
			{
				printf("In winter and in summer, it is the same color.\n");
			}
			else
			{
				duck = "tree";
			}
			break;
		case 13:
			if(print == 1)
			{
				printf("At first, there is gloss, then - a crack!\n");
			}
			else
			{
				duck = "thunderstorm";
			}
			break;
		case 14:
			if(print == 1)
			{
				printf("A red-haired rogue, cunning and skillful, came into the barn and recounted the hens.\n");
			}
			else
			{
				duck = "fox";
			}
			break;
		case 15:
			if(print == 1)
			{
				printf("He walks importantly across the puddle, comes out of the water dry, wears red boots, gives soft featherbeds.\n");
			}
			else
			{
				duck = "goose";
			}
			break;
		case 16:
			if(print == 1)
			{
				printf("Striped balls from the garden have arrived here.\n");
			}
			else
			{
				duck = "watermelon";
			}
			break;
		case 17:
			if(print == 1)
			{
				printf("White peas on a green leg.\n");
			}
			else
			{
				duck = "lily ";
			}
			break;
		case 18:
			if(print == 1)
			{
				printf("Teeth in the mouth in three rows. It's a whole disaster. This predator is famous for being a sea bandit.\n");
			}
			else
			{
				duck = "shark";
			}
			break;
		case 19:
			if(print == 1)
			{
				printf("We are forest inhabitants, wise builders. We all together build a house for ourselves under the spruce from needles.\n");
			}
			else
			{
				duck = "ants";
			}
			break;
		case 20:
			if(print == 1)
			{
				printf("A log floats down the river. Oh, and it's so wicked!\n");
			}
			else
			{
				duck = "crocodile";
			}
			break;
		case 21:
			if(print == 1)
			{
				printf("The living castle growls, lies across the door. Two medals on his chest. Better not to go in!\n");
			}
			else
			{
				duck = "dog";
			}
			break;
		case 22:
			if(print == 1)
			{
				printf("I wake everyone up on time, even though I don't wind the clocks.\n");
			}
			else
			{
				duck = "rooster";
			}
			break;
		case 23:
			if(print == 1)
			{
				printf("He knocks all the time, pecks trees. But he doesn't cripple them, only heals them.\n");
			}
			else
			{
				duck = "woodpecker";
			}
			break;
		case 24:
			if(print == 1)
			{
				printf("Empty itself, thick voice, beats, helps to march and sing.\n");
			}
			else
			{
				duck = "drum";
			}
			break;
		case 25:
			if(print == 1)
			{
				printf("It will fall - it will bounce, you will hit - it will not cry.\n");
			}
			else
			{
				duck = "ball";
			}
			break;
		case 26:
			if(print == 1)
			{
				printf("Oh, do not touch me: I will burn you even without fire!\n");
			}
			else
			{
				duck = "nettle";
			}
			break;
		case 27:
			if(print == 1)
			{
				printf("This horse does not eat oats, two wheels instead of legs. Sit on top and ride it, just steer better.\n");
			}
			else
			{
				duck = "bicycle";
			}
			break;
		case 28:
			if(print == 1)
			{
				printf("Then back, then forth, wanders, floats the ship. If you stop it - beware! It will poke holes in the sea!\n");
			}
			else
			{
				duck = "iron";
			}
			break;
		case 29:
			if(print == 1)
			{
				printf("Admire, look - the North Pole inside! There shines snow and ice, there winter itself lives.\n");
			}
			else
			{
				duck = "refrigerator";
			}
			break;
		case 30:
			if(print == 1)
			{
				printf("I can take you underground any time of the year and in any weather, and quickly take you anywhere in an hour.\n");
			}
			else
			{
				duck = "subway";
			}
			break;
		default:
			errors(1);
			break;
	}
	//printf("\n\n\n");
	return duck;
}

int generate_number()
{
	srand(time(NULL));
	int random_value = 1 + rand()%30;
	return random_value;

}

My_game* get_data_for_start_game()
{
	My_game *we_have = malloc(sizeof(My_game));
	we_have->puzzle_num = generate_number();
	we_have->duck = puzzles(we_have->puzzle_num, 0);
	we_have->life = 4;
	we_have->duck_guess = calloc(1, sizeof(we_have->duck));
	return we_have;

}

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

void examination_letter(My_game* we_have, char next_letter)
{
	int count_letter = 0;
	for(int i = 0; i < sizeof(we_have->duck); i++)
	{

		if(we_have->duck[i] == next_letter)
		{
			we_have->duck_guess[i] = next_letter;
			count_letter++;
		}

	}
	if(count_letter >= 1)
	{
		printf("There is such a letter.\n\n\n");
	}
	else
	{
		printf("No such letter.\n\n\n");
		we_have->life--;
	}

}

int is_it_letter(char next_letter)
{
	if((next_letter >= 65 && next_letter <= 90)||(next_letter >= 97 && next_letter <= 122))
	{
		return 1;
	}
	else
	{
		return 0;
	}
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

void custom_block(My_game* we_have)
{
	char c;
	while(we_have->life>0 && strcmp(we_have->duck_guess, we_have->duck)!=0)
	{
		int is_it_letter_exam = 0;
		char next_letter;
		while(is_it_letter_exam == 0)
		{
			printf("Your puzzle: ");
			puzzles(we_have->puzzle_num, 1);
			enteface(we_have);
			print_duck_guess(we_have);
			printf("Enter a letter: ");
			next_letter = getchar();
			while((c = getchar()!='\n' && c != EOF));//Классная штука, чистит буфер
			is_it_letter_exam = is_it_letter(next_letter);
			if(is_it_letter_exam == 0)
			{
				printf("\nIt's not a letter.\n\n\n");

			}

		}
		strlower(&next_letter);
		examination_letter(we_have, next_letter);
	}
	if(we_have->life<=0)
	{
		enteface(we_have);
	}
	if(strcmp(we_have->duck_guess, we_have->duck)==0 && we_have->life>0)
	{
		printf("YOUR WORD: %s\n", we_have->duck);
		printf("YOU ARE ALIVE! :)\n");
	}

}

int main()
{
	printf("\n\n\t\t\t Welcome! It's a gallows!\n\n");
	printf("1 - Start game.\n");
	printf("2 - Exit.\n");
	int choise = 5;
	while(choise!= 1 && choise!= 2)
	{
        printf("Enter your choise: ");
	char c;
	scanf("%d", &choise);
	while((c = getchar()!='\n' && c != EOF));//Классная штука, чистит буфер
	if(choise!= 1 && choise!= 2)
	{
		printf("it's not a choise.\n");
	}
	}
	printf("\n\n\n");
	if(choise == 1)
	{
		My_game* we_have = get_data_for_start_game();
		custom_block(we_have);
	}
	return 0;
}
