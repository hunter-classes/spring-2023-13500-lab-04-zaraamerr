
CC=g++
CFLAGS=-c -Wall
LDFLAGS=

SOURCES=main.cpp box.cpp checkerboard.cpp cross.cpp lower.cpp upper.cpp trapezoid.cpp checkerboard3x3.cpp
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