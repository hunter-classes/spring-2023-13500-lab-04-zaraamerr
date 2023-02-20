# CXX = g++
# CXXFLAGS = -Wall -Wextra -std=c++11

# SRCS = box.cpp main.cpp
# #checkerboard.cpp cross.cpp lower.cpp upper.cpp trapezoid.cpp checkerboard3x3.cpp
# OBJS = $(SRCS:.cpp=.o)

# all: main

# main: $(OBJS)
# 	$(CXX) $(CXXFLAGS) -o $@ $^

# %.o: %.cpp
# 	$(CXX) $(CXXFLAGS) -c -o $@ $< -Iinclude

# clean:
# 	rm -f $(OBJS) main

main: main.o box.o
	g++ -o main main.o box.o

main.o: main.cpp main.h
	g++ -c main.cpp