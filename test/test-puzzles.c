#include <assert.h>
#include <ctype.h>
#include <puzzles.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>
#include <user.h>

void test_puzzles()
{
    char* result;

    // Тест 1
    result = puzzles(1, 0);
    printf("Puzzle 1: %s\n", result);
    assert(strcmp(result, "sled") == 0);

    // Тест 2
    result = puzzles(2, 0);
    printf("Puzzle 2: %s\n", result);
    assert(strcmp(result, "snow") == 0);

    // Тест 3
    result = puzzles(3, 0);
    printf("Puzzle 3: %s\n", result);
    assert(strcmp(result, "carrot") == 0);

    // Тест 4
    result = puzzles(4, 0);
    printf("Puzzle 4: %s\n", result);
    assert(strcmp(result, "snowflake") == 0);

    // Тест 5
    result = puzzles(5, 0);
    printf("Puzzle 5: %s\n", result);
    assert(strcmp(result, "wolf") == 0);

    // Тест 6
    result = puzzles(6, 0);
    printf("Puzzle 6: %s\n", result);
    assert(strcmp(result, "lock") == 0);

    // Тест 7
    result = puzzles(7, 0);
    printf("Puzzle 7: %s\n", result);
    assert(strcmp(result, "cabbage") == 0);

    // Тест 8
    result = puzzles(8, 0);
    printf("Puzzle 8: %s\n", result);
    assert(strcmp(result, "onion") == 0);

    // Тест 9
    result = puzzles(9, 0);
    printf("Puzzle 9: %s\n", result);
    assert(strcmp(result, "zucchini") == 0);

    // Тест 10
    result = puzzles(10, 0);
    printf("Puzzle 10: %s\n", result);
    assert(strcmp(result, "mirror") == 0);

    // Тест 11
    result = puzzles(11, 0);
    printf("Puzzle 11: %s\n", result);
    assert(strcmp(result, "nail") == 0);

    // Тест 12
    result = puzzles(12, 0);
    printf("Puzzle 12: %s\n", result);
    assert(strcmp(result, "tree") == 0);

    // Тест 13
    result = puzzles(13, 0);
    printf("Puzzle 13: %s\n", result);
    assert(strcmp(result, "thunderstorm") == 0);

    // Тест 14
    result = puzzles(14, 0);
    printf("Puzzle 14: %s\n", result);
    assert(strcmp(result, "fox") == 0);

    // Тест 15
    result = puzzles(15, 0);
    printf("Puzzle 15: %s\n", result);
    assert(strcmp(result, "goose") == 0);

    // Тест 16
    result = puzzles(16, 0);
    printf("Puzzle 16: %s\n", result);
    assert(strcmp(result, "watermelon") == 0);

    // Тест 17
    result = puzzles(17, 0);
    printf("Puzzle 17: %s\n", result);
    assert(strcmp(result, "lily") == 0);

    // Тест 18
    result = puzzles(18, 0);
    printf("Puzzle 18: %s\n", result);
    assert(strcmp(result, "shark") == 0);

    // Тест 19
    result = puzzles(19, 0);
    printf("Puzzle 19: %s\n", result);
    assert(strcmp(result, "ants") == 0);

    // Тест 20
    result = puzzles(20, 0);
    printf("Puzzle 20: %s\n", result);
    assert(strcmp(result, "crocodile") == 0);

    // Тест 21
    result = puzzles(21, 0);
    printf("Puzzle 21: %s\n", result);
    assert(strcmp(result, "dog") == 0);

    // Тест 22
    result = puzzles(22, 0);
    printf("Puzzle 22: %s\n", result);
    assert(strcmp(result, "rooster") == 0);

    // Тест 23
    result = puzzles(23, 0);
    printf("Puzzle 23: %s\n", result);
    assert(strcmp(result, "woodpecker") == 0);

    // Тест 24
    result = puzzles(24, 0);
    printf("Puzzle 24: %s\n", result);
    assert(strcmp(result, "drum") == 0);

    // Тест 25
    result = puzzles(25, 0);
    printf("Puzzle 25: %s\n", result);
    assert(strcmp(result, "ball") == 0);

    // Тест 26
    result = puzzles(26, 0);
    printf("Puzzle 26: %s\n", result);
    assert(strcmp(result, "nettle") == 0);

    // Тест 27
    result = puzzles(27, 0);
    printf("Puzzle 27: %s\n", result);
    assert(strcmp(result, "bicycle") == 0);

    // Тест 28
    result = puzzles(28, 0);
    printf("Puzzle 28: %s\n", result);
    assert(strcmp(result, "iron") == 0);

    // Тест 29
    result = puzzles(29, 0);
    printf("Puzzle 29: %s\n", result);
    assert(strcmp(result, "refrigerator") == 0);

    // Тест 30
    result = puzzles(30, 0);
    printf("Puzzle 30: %s\n", result);
    assert(strcmp(result, "subway") == 0);
}

int main()
{
    test_puzzles();

    printf("All tests passed!\n");

    return 0;
}
