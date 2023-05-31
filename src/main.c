#include <stdio.h>
#include <time.h>
#include <string.h>
#include <stdlib.h>
#include <ctype.h>
#include <puzzles.h>
#include <enterface.h>
#include <user.h>

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
