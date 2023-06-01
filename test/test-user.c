#include <stdio.h>
#include <assert.h>
#include <string.h>
#include <stdlib.h>
#include <ctype.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>
#include <user.h>
#include <puzzles.h>




// Тестируем функцию generate_number()
void test_generate_number()
{
    int number = generate_number();
    printf("Generated number: %d\n", number);
    // Проверяем, что сгенерированное число находится в ожидаемом диапазоне
    assert(number >= 1 && number <= 30);
}

// Тестируем функцию strlower()
void test_strlower()
{
    char string[] = "HeLLo";
    strlower(string);
    printf("Lowercased string: %s\n", string);
    // Проверяем, что все символы строки стали в нижнем регистре
    assert(string[0] == 'h' && string[1] == 'e' && string[2] == 'l' && string[3] == 'l' && string[4] == 'o');
}

// Тестируем функцию examination_letter()
void test_examination_letter()
{
    My_game game;
    game.duck = "hello";
    game.duck_guess = calloc(strlen(game.duck) + 1, sizeof(char));
    game.life = 4;

    examination_letter(&game, 'l');
    printf("Duck guess: %s\n", game.duck_guess);
    printf("Remaining life: %d\n", game.life);
    // Проверяем, что буква 'l' была найдена в слове и вставлена в массив duck_guess
    assert(game.duck_guess[2] == 'l');
    // Проверяем, что количество оставшихся жизней уменьшилось
    assert(game.life == 4);

    examination_letter(&game, 'z');
    printf("Duck guess: %s\n", game.duck_guess);
    printf("Remaining life: %d\n", game.life);
    // Проверяем, что буква 'z' не была найдена в слове и количество оставшихся жизней уменьшилось
    assert(game.duck_guess[2] == 'l');
    assert(game.life == 3);

    free(game.duck_guess);
}

// Тестируем функцию is_it_letter()
void test_is_it_letter()
{
    // Проверяем, что функция правильно определяет буквы
    assert(is_it_letter('A') == 1);
    assert(is_it_letter('z') == 1);
    // Проверяем, что функция правильно определяет не-буквы
    assert(is_it_letter('1') == 0);
    assert(is_it_letter('$') == 0);
}

int main()
{
    test_generate_number();
    test_strlower();
    test_examination_letter();
    test_is_it_letter();

    printf("All tests passed!\n");

    return 0;
}