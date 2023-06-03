TARGET = ./bin/MyProject

CC = gcc

CFLAGS = -Wall

PATH_INCLUDE = -Isrc

FORMAT_FILES = clang-format -i --verbose

PREF_SRC = ./src/
PREF_OBJ = ./obj/src/

SRC = $(wildcard $(PREF_SRC)*.c)
OBJ = $(patsubst $(PREF_SRC)%.c, $(PREF_OBJ)%.o, $(SRC))

all: $(TARGET)
	$(FORMAT_FILES) $(SRC) ./test/test-puzzles.c ./test/test-enterface.c ./test/test-user.c

$(PREF_OBJ)%.o : $(PREF_SRC)%.c
		                        $(CC) -c $(CFLAGS) $(PATH_INCLUDE) -o $@ $<

$(TARGET) : $(OBJ) $(FORMAT)
		                        $(CC) $(CFLAGS) -o $(TARGET) $(OBJ)

clean :
		                        rm $(TARGET) $(PREF_OBJ)*.o

TESTS_SRC = $(wildcard ./tests/*.c)

tests : 
	$(CC) $(CFLAGS) $(PATH_INCLUDE) -o ./bin/test-puzzles ./test/test-puzzles.c ./src/puzzles.c ./src/user.c ./src/enterface.c
	$(CC) $(CFLAGS) $(PATH_INCLUDE) -o ./bin/test-enterface ./test/test-enterface.c ./src/puzzles.c ./src/user.c ./src/enterface.c
	$(CC) $(CFLAGS) $(PATH_INCLUDE) -o ./bin/test-user ./test/test-user.c ./src/puzzles.c ./src/user.c ./src/enterface.c	
