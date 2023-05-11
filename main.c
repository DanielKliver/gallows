#include <stdlib.h>
#include <stdio.h>

typedef struct
{
	int life;
	int puzzle_num;
	char *duck;
	char *duck_guess;

} My_game;

char *puzzles(int number)
{
	char *duck;
	duck = malloc(20);
	switch (number)
	{
		case 1:
			printf("Under the mountain is a pony, in the mountain - a wooden thing.\n");
			duck = "Sled";
			break;
		case 2:
			printf("Flowers fall from the sky onto trees and bushes. White, fluffy, but not fragrant.\\n");
			duck = "Snow";
			break;
		case 3:
			printf("A red maiden sits in a dungeon and her braid is on the street.\n");
			duck = "Carrot";
			break;
		case 4:
			printf("In winter - a star, in spring - water.\n");
			duck = "Snowflake";
			break;
		case 5:
			printf("Who is angry and hungry in cold winter?\n");
			duck = "Wolf";
			break;
		case 6:
			printf("It doesn't bark, doesn't bite, but doesn't let you into the house.\n");
			duck = "Lock";
			break;
		case 7:
			printf("A hundred clothes with no fasteners.\n");
			duck = "Cabbage";
			break;
		case 8:
			printf("An old man sits dressed in a fur coat, whoever undresses him sheds tears.\n");
			duck = "Onion";
			break;
		case 9:
			printf("Little white pigs lay on the ridges.\n");
			duck = "Zucchini";
			break;
		case 10:
			printf("It shines, it sparkles, it doesn't flatter anyone.\n");
			duck = "Mirror";
			break;
		case 11:
			printf("A poor fellow hides in the board - only his cap is visible.\n");
			duck = "Nail";
			break;
		case 12:
			printf("In winter and in summer, it is the same color.\n");
			duck = "Tree";
			break;
		case 13:
			printf("At first, there is gloss, then - a crack!\n");
			duck = "Thunderstorm";
			break;
		case 14:
			printf("A red-haired rogue, cunning and skillful, came into the barn and recounted the hens.\n");
			duck = "Fox";
			break;
		case 15:
			printf("He walks importantly across the puddle, comes out of the water dry, wears red boots, gives soft featherbeds.\n");
			duck = "Goose";
			break;
		case 16:
			printf("Striped balls from the garden have arrived here.\n");
			duck = "Watermelon";
			break;
		case 17:
			printf("White peas on a green leg.\n");
			duck = "Lily ";
			break;
		case 18:
			printf("Teeth in the mouth in three rows. It's a whole disaster. This predator is famous for being a sea bandit.\n");
			duck = "Shark";
			break;
		case 19:
			printf("We are forest inhabitants, wise builders. We all together build a house for ourselves under the spruce from needles.\n");
			duck = "Ants";
			break;
		case 20:
			printf("A log floats down the river. Oh, and it's so wicked!\n");
			duck = "Crocodile";
			break;
		case 21:
			printf("The living castle growls, lies across the door. Two medals on his chest. Better not to go in!\n");
			duck = "Dog";
			break;
		case 22:
			printf("I wake everyone up on time, even though I don't wind the clocks.\n");
			duck = "Rooster";
			break;
		case 23:
			printf("He knocks all the time, pecks trees. But he doesn't cripple them, only heals them.\n");
			duck = "Woodpecker";
			break;
		case 24:
			printf("Empty itself, thick voice, beats, helps to march and sing.\n");
			duck = "Drum";
			break;
		case 25:
			printf("It will fall - it will bounce, you will hit - it will not cry.\n");
			duck = "Ball";
			break;
		case 26:
			printf("Oh, do not touch me: I will burn you even without fire!\n");
			duck = "Nettle";
			break;
		case 27:
			printf("This horse does not eat oats, two wheels instead of legs. Sit on top and ride it, just steer better.\n");
			duck = "Bicycle";
			break;
		case 28:
			printf("Then back, then forth, wanders, floats the ship. If you stop it - beware! It will poke holes in the sea!\n");
			duck = "Iron";
			break;
		case 29:
			printf("Admire, look - the North Pole inside! There shines snow and ice, there winter itself lives.\n");
			duck = "Refrigerator";
			break;
		case 30:
			printf("I can take you underground any time of the year and in any weather, and quickly take you anywhere in an hour.\n");
			duck = "Subway";
			break;
		default:
			errors(1);
			break;
	}
	return duck;
}

My_game *get_data_for_start_game()
{
	My_game *we_have = malloc(sizeof(My_game));
	we_have->puzzle_num = generate_number();
	char *duckpz = puzzles(we_have->puzzle_num);
	we_have->duck = duckpz;
	we_have->life = 4;
	we_have->duck_guess = malloc(sizeof(we_have->duck) * sizeof(char));
	return we_have;
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
		printf("Такая буква есть\n");
	}
	else
	{
		printf("Такой буквы нет\n");
		we_have->life--;
	}
	printf("Ваше слово: %s\n", we_have->duck_guess);



}

void custom_block(My_game* we_have)
{
	while(we_have->life>0 && strcmp(we_have->duck_guess, we_have->duck)!=0)
	{
		char next_letter;
		getchar();
		while((next_letter = getchar()!='\n' && next_letter != EOF));
		printf("Введите букву: \n");
		next_letter = getchar();
		strlower(&next_letter);
		examination_letter(we_have, next_letter);
	}
	if(we_have->life<=0)
	{
		printf("ВЫ ПРОИГРАЛИ\n");
	}
	if(strcmp(we_have->duck_guess, we_have->duck)==0 && we_have->life>0)
	{
		printf("ВЫ ВЫИГРАЛИ\n");
	}

}

int main()
{
	My_game* we_have = get_data_for_start_game();
	custom_block(we_have);
	return 0;
}`
