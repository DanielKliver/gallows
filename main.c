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
        switch(number)
        {
                case 1:
                        printf("Под гору - коняшка, в гору - деревяшка.\n");
                        duck = "Санки";
                        break;
                case 2:
                        printf("На деревья, на кусты с неба падают цветы. Белые, пушистые, только не душистые.\n");
                        duck = "Снег";
                        break;
                case 3:
                        printf("Сидит в темнице, красная девица, а коса на улице.\n");
                        duck = "Морковь";
                        break;
                case 4:
                        printf("Зимой — звезда, весной — вода.\n");
                        duck = "Снежинка";
                        break;
                case 5:
                        printf("Кто зимой холодной ходит злой, голодный?\n");
                        duck = "Волк";
                        break;
                case 6:
                        printf("Не лает, не кусает, а в дом не пускает.\n");
                        duck = "Замок";
                        break;

                case 7:
                        printf("Сто одёжек и все без застежек.\n");
                        duck = "Капуста";
                        break;
                case 8:
                        printf("Сидит дед, в шубу одет, кто его раздевает, тот слёзы проливает.\n");
                        duck = "Лук";
                        break;
                case 9:
                        printf("Белые поросятки прилегли на грядке.\n");
                        duck = "Кабачки";
                        break;
                case 10:
                        printf("И сияет, и блестит, никому оно не льстит.\n");
                        duck = "Зеркало";
                        break;
                case 11:
                        printf("В доску спрячется бедняжка — чуть видна его фуражка.\n");
                        duck = "Гвоздь";
                        break;
                case 12:
                        printf("Зимой и летом одним цветом.\n");
                        duck = "Ёлка";
                        break;
                case 13:
                        printf("Сперва блеск, за блеском — треск!\n");
                        duck = "Гроза";
                        break;
                case 14:
                        printf("Рыжая плутовка, хитрая да ловкая, в сарай попала, кур пересчитала.\n");
                        duck = "Лиса";
                        break;
                case 15:
                        printf("По лужку он важно бродит, из воды сухим выходит, носит красные ботинки, дарит мягкие перинки.\n");
                        duck = "Гусь";
                        break;
                case 16:
                        printf("К нам приехали с бахчи полосатые мячи.\n");
                        duck = "Арбуз";
                        break;
                case 17:
                        printf("Белые горошки на зелёной ножке.\n");
                        duck = "Ландыш";
                        break;
                case 18:
                        printf("Зубы в пасти в три ряда. Это целая беда. Этот хищник знаменит, тем, что он — морской бандит.\n");
                        duck = "Акула";
                        break;
                case 19:
                        printf("Мы — лесные жители, мудрые строители. Из иголок всей артелью строим дом себе под елью.\n");
                        duck = "Муравьи";
                        break;
                case 20:
                        printf("По реке плывет бревно. Ох, и злющее оно!\n");
                        duck = "Крокодил";
                        break;
                case 21:
                        printf("Заворчал живой замок, лег у двери поперек. Две медали на груди. Лучше в дом не заходи!\n");
                        duck = "Собака";
                        break;
                case 22:
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
