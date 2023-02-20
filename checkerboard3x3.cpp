// Name: Zara Amer
// Csci135
// 2/19/23
// Task G Lab 4: Write a program checkerboard3x3.cpp that takes an input width
//and height and prints a checkerboard of 3-by-3 squares. (It should work even if the input
// dimensions are not a multiple of three.)

#include <iostream>
#include <string>
#include "main.h"

std::string checkerboard3x3(int width, int height) {
    std::string result;
    for (int i = 0; i < height; i++) {
        for (int j = 0; j < width; j++) {
            if ((i / 3) % 2 == 0) {
                if ((j / 3) % 2 == 0) {
                    result += "*";
                } else {
                    result += " ";
                }
            } else {
                if ((j / 3) % 2 == 0) {
                    result += " ";
                } else {
                    result += "*";
                }
            }
        }
        result += "\n";
    }
    return result;
}
