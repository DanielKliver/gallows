#include <ctype.h>
#include <enterface.h>
#include <puzzles.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>
#include <user.h>

int errors(int error_num)
{
    switch (error_num) {
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
    for (int i = 0; i < strlen(string); i++) {
        string[i] = tolower(string[i]);
    }
}

int generate_number()
{
    srand(time(NULL));
    int random_value = 1 + rand() % 30;
    return random_value;
}

My_game* get_data_for_start_game()
{
    My_game* we_have = malloc(sizeof(My_game));
    we_have->puzzle_num = generate_number();
    we_have->duck = puzzles(we_have->puzzle_num, 0);
    we_have->life = 4;
    we_have->duck_guess = calloc(1, sizeof(we_have->duck));
    return we_have;
}

void examination_letter(My_game* we_have, char next_letter)
{
    int count_letter = 0;
    for (int i = 0; i < sizeof(we_have->duck); i++) {
        if (we_have->duck[i] == next_letter) {
            we_have->duck_guess[i] = next_letter;
            count_letter++;
        }
    }
    if (count_letter >= 1) {
        printf("There is such a letter.\n\n\n");
    } else {
        printf("No such letter.\n\n\n");
        we_have->life--;
    }
}

int is_it_letter(char next_letter)
{
    if ((next_letter >= 65 && next_letter <= 90)
        || (next_letter >= 97 && next_letter <= 122)) {
        return 1;
    } else {
        return 0;
    }
}

void custom_block(My_game* we_have)
{
    char c;
    while (we_have->life > 0
           && strcmp(we_have->duck_guess, we_have->duck) != 0) {
        int is_it_letter_exam = 0;
        char next_letter;
        while (is_it_letter_exam == 0) {
            printf("Your puzzle: ");
            puzzles(we_have->puzzle_num, 1);
            enteface(we_have);
            print_duck_guess(we_have);
            printf("Enter a letter: ");
            next_letter = getchar();
            while ((c = getchar() != '\n' && c != EOF))
                ; //Классная штука, чистит буфер
            is_it_letter_exam = is_it_letter(next_letter);
            if (is_it_letter_exam == 0) {
                printf("\nIt's not a letter.\n\n\n");
            }
        }
        strlower(&next_letter);
        examination_letter(we_have, next_letter);
    }
    if (we_have->life <= 0) {
        enteface(we_have);
    }
    if (strcmp(we_have->duck_guess, we_have->duck) == 0 && we_have->life > 0) {
        printf("YOUR WORD: %s\n", we_have->duck);
        printf("YOU ARE ALIVE! :)\n");
    }
}
