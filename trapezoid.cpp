//Name: Zara AMER
//CSCI135
//2/19/23
//Task F Lab 4: Write a program trapezoid.cpp that prints an upside-down trapezoid of 
//given width and height. However, if the input height is impossibly large for the given
//width, then the program should report, Impossible shape!

#include <iostream>
#include <string>
#include "main.h"

std::string trapezoid(int width, int height){
    std::string result;
    if (height > width / 2 + 1) {
        result = "Impossible shape!\n";
        return result;
    }
    for (int i = 0; i < height; i++) {
        for (int j = 0; j < i; j++) {
            result += " ";
        }
        for (int j = 0; j < width - i * 2; j++) {
            result += "*";
        }
        result += "\n";
    }
    return result;
}