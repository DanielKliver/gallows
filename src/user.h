#ifndef USER_H
#define USER_H
#include <stdio.h>
#include <time.h>
#include <string.h>
#include <stdlib.h>
#include <ctype.h>
#include <puzzles.h>
#include <enterface.h>
#include <user.h>

int errors(int error_num);
void strlower(char* string);
int generate_number();
My_game* get_data_for_start_game();
void examination_letter(My_game* we_have, char next_letter);
int is_it_letter(char next_letter);
void custom_block(My_game* we_have);


#endif //USER_H
