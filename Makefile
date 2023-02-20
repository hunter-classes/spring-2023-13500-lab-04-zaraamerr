main: main.o box.o checkerboard.o cross.o lower.o
	g++ -o main main.o box.o checkerboard.o cross.o lower.o

main.o: main.cpp main.h
	g++ -c main.cpp