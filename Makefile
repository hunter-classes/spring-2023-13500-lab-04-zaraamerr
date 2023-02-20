main: main.o box.o checkerboard.o cross.o
	g++ -o main main.o box.o checkerboard.o cross.o

main.o: main.cpp main.h
	g++ -c main.cpp