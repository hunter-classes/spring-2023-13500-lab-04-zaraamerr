main: main.o box.o checkerboard.o
	g++ -o main main.o box.o checkerboard.o

main.o: main.cpp main.h
	g++ -c main.cpp