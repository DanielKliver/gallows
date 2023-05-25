#include <stdio.h>
#include <time.h>
#include <string.h>
#include <stdlib.h>
#include <ctype.h>

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
	return duck;

}
