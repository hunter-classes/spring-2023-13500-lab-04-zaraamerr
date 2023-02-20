# main: main.o box.o checkerboard.o cross.o lower.o upper.o trapezoid.o
# 	g++ -o main main.o box.o checkerboard.o cross.o lower.o upper.o trapezoid.o

# main.o: main.cpp main.h
# 	g++ -c main.cpp

CC=g++
CFLAGS=-c -Wall
LDFLAGS=

SOURCES=main.cpp box.cpp checkerboard.cpp cross.cpp lower.cpp upper.cpp trapezoid.cpp
#shapes.cpp
OBJECTS=$(SOURCES:.cpp=.o)
EXECUTABLE=main

all: $(SOURCES) $(EXECUTABLE)

$(EXECUTABLE): $(OBJECTS)
	$(CC) $(LDFLAGS) $(OBJECTS) -o $@

.cpp.o:
	$(CC) $(CFLAGS) $< -o $@

clean:
	rm -rf *.o $(EXECUTABLE)