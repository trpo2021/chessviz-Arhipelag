all: bin/chess

bin/chess: obj/main.o obj/libchess.a
		gcc -Wall -Werror -I src -o bin/chess obj/src/main.o obj/libchess.a

obj/libchess.a: obj/turning.o 
		ar rcs obj/libchess.a obj/src/turning.o

obj/main.o: src/chess/main.c
		gcc -Wall -Werror -c -I src -o obj/src/main.o src/chess/main.c

obj/turning.o: src/chesslib/turning.c
		gcc -Wall -Werror -c -I src -o obj/src/turning.o src/chesslib/turning.c

.PHONY : clean;

clean:
		rm -rf obj/src/*.o bin/chess
