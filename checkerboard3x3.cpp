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
    std::string result; //Create empty string var "result" that will store checkerboard 3x3 string.
    for (int i = 0; i < height; i++) {
        for (int j = 0; j < width; j++) {
            if ((i / 3) % 2 == 0) { //determine whether the current square is an asterisk or a space. This is done 
                                    //by checking whether the row and column of the current square correspond to an 
                                    //asterisk or a space in the 3x3 grid. The formula (i / 3) % 2 == 0 checks whether 
                                    //the current row is in an even or odd 3x3 grid
                if ((j / 3) % 2 == 0) { //and (j / 3) % 2 == 0 checks whether 
                                    //the current column is in an even or odd 3x3 grid.
                    result += "*"; //append asterisk to result string
                } else {
                    result += " "; //otherwise append space
                }
            } else {
                if ((j / 3) % 2 == 0) {
                    result += " ";
                } else {
                    result += "*";
                }
            }
        }
        result += "\n"; //add newline character
    }
    return result; //return checkerboard3x3 string
}
