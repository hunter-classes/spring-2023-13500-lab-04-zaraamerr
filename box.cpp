//Name:Zara Amer
//Date: 2/19/23
//CS135
//Task A of Lab 4: Write a program box.cpp that takes an input of width and height and prints
//a solid rectangular box of the requested size using asterisks.

#include <iostream>
#include <string>
#include "main.h"

std::string box(int width, int height){
    std::string result;
    for (int i=0; i < height; i++){
        for (int j= 0; j < width; j++){
            result+= "*";
        }
        result+= "\n";
    }
    return result;
}