#include <assert.h>
#include <ctype.h>
#include <puzzles.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>
#include <user.h>

void test_enteface()
{
    My_game game;

    // Тест 1: проверка вывода для 0 жизней
    game.life = 0;
    assert(enteface(&game) == 0);

    // Тест 2: проверка вывода для 1 жизни
    game.life = 1;
    assert(enteface(&game) == 0);

    // Тест 3: проверка вывода для 2 жизней
    game.life = 2;
    assert(enteface(&game) == 0);

    // Тест 4: проверка вывода для 3 жизней
    game.life = 3;
    assert(enteface(&game) == 0);

    // Тест 5: проверка вывода для 4 жизней
    game.life = 4;
    assert(enteface(&game) == 0);

    // Тест 6: проверка вывода для некорректного числа жизней
    game.life = 5;
    assert(enteface(&game) == -1);

    // Тест 7: проверка вывода для отрицательного числа жизней
    game.life = -1;
    assert(enteface(&game) == -1);
}

void test_print_duck_guess()
{
    My_game game;

    // Тест 1: проверка вывода пустой строки
    strcpy(game.duck_guess, "");
    print_duck_guess(&game);

    // Тест 2: проверка вывода строки "hello"
    strcpy(game.duck_guess, "hello");
    print_duck_guess(&game);

    // Тест 3: проверка вывода строки с пробелами
    strcpy(game.duck_guess, "   ");
    print_duck_guess(&game);

    // Тест 4: проверка вывода строки с символами и пробелами
    strcpy(game.duck_guess, "a b c");
    print_duck_guess(&game);

    // Тест 5: проверка вывода строки с символами, цифрами и специальными
    // символами
    strcpy(game.duck_guess, "Hello123!@#");
    print_duck_guess(&game);
}

int main(void)
{
    test_enteface();
    test_print_duck_guess();

    return 0;
}
