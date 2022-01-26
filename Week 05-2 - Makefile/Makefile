myprog: main.o mod1.o mod2.o
	gcc -o myprog main.o mod1.o mod2.o
main.o: main.c mod2.h
	gcc -c main.c
mod1.o: mod1.c mod1.h
	gcc -c mod1.c
mod2.o: mod2.c mod1.h mod2.h
	gcc -c mod2.c