#include <stdlib.h>
#include <stdio.h>

typedef struct
{
        int life;
        int puzzle_num;
        char *duck;
        char *duck_guess;

} My_game;

printf("Всех я вовремя бужу, хоть часов не завожу.\n");
                        duck = "Петух";
                        break;
                case 23:
                        printf("Все время стучит, деревья долбит. Но их не калечит, а только лечит.\n");
                        duck = "Дятел";
                        break;
                case 24:
                        printf("Сам пустой, голос густой, дробь отбивает, шагать и петь помогает.\n");
                        duck = "Барабан";
                        break;
                case 25:
                        printf("Упадет — поскачет, ударишь — не плачет.\n");
                        duck = "Мяч";
                        break;
                case 26:
                        printf("Ах, не трогайте меня: обожгу и без огня!\n");
                        duck = "Крапива";
                        break;
                case 27:
                        printf("Этот конь не ест овса, вместо ног — два колеса. Сядь верхом и мчись на нём, только лучше правь рулём.\n");
                        duck = "Велосипед";
                        break;
                case 28:
                        printf("То назад, то вперед, ходит, бродит пароход. Остановишь — горе! Продырявит море!\n");
                        duck = "Утюг";
                        break;
                case 29:
                        printf("Полюбуйся, посмотри — полюс северный внутри! Там сверкает снег и лед, там сама зима живет.\n");
                        duck = "Холодильник";
                        break;
                case 30:
                        printf("Я в любое время года и в любую непогоду очень быстро в час любой провезу вас под землей.\n");
                        duck = "Метро";
                        break;
                default:
                        errors(1);
                        break;
        }
        return duck;
}
My_game* get_data_for_start_game()
{
        My_game *we_have = malloc(sizeof(My_game));
        we_have->puzzle_num = generate_number();
        char *duckpz = puzzles(we_have->puzzle_num);
        we_have->duck = duckpz;
        we_have->life = 4;
        we_have->duck_guess = malloc(sizeof(we_have->duck)*sizeof(char));
        return we_have;

}

int main()
{
return 0;
}
