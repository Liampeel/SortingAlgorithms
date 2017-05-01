
EXE_DIR = .
EXE = $(EXE_DIR)/main
SRC= main.c bubble.c merge.c quicksort.c
CC=      cc
COPT=    -O
CFLAGS=
LIBS = -lm
OBJ= $(SRC:.c=.o)
.c.o:
	$(CC) $(COPT) -c -o $@ $<
$(EXE): $(OBJ)
	$(CC) $(OBJ) $(CFLAGS) -o $(EXE) $(LIBS)
clean:
	rm -f $(OBJ) $(EXE)

main.o: main.c 
bubble.o: bubble.c bubble.h
merge.o: merge.c merge.h
quicksort.o: quicksort.c quicksort.h
