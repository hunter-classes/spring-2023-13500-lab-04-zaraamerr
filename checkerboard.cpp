//Name: Zara Amer
//CSCI135
//2/19/23
//Task B of Lab 04:

#include <iostream>
#include <string>
#include "main.h"

std::string checkerboard(int width, int height){
    std::string result;
    for (int i = 0; i < height; i++) {
        for (int j = 0; j < width; j++) {
            if ((i + j) % 2 == 0) {
                result+="*";
            } else {
                result+=" ";
            }
        }
        result+="\n";
    }

    return result;

}