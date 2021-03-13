chess: main.o turning.o
		gcc -Wall -Werror -o chess main.o turning.o

main.o: main.c
		gcc -Wall -Werror -c -o main.o main.c

turning.o: turning.c
		gcc -Wall -Werror -c -o turning.o turning.c

clean:
		rm *.o chess