//Name: Zara Amer
//CSCI135
//2/19/23
//Task B of Lab 04: Write a program checkerboard.cpp that takes an input of width and height 
//and prints a rectangular checkerboard of the requested size using asterisks and spaces (alternating).

#include <iostream>
#include <string>
#include "main.h"

std::string checkerboard(int width, int height){
    std::string result; //Create empty string var "result" that will store checkerboard string.
    for (int i = 0; i < height; i++) { //Start loop that will execute height "i" times
                                      //Each iteration of loop represents a row in checkerboard.
        for (int j = 0; j < width; j++) { //Start loop that will execute width "i" times
                                          //Each iteration of this loop represents a column in the checkerboard.
            if ((i + j) % 2 == 0) { //Check if sum of current row index 'i' and current column index 'j' is even.
                result+="*"; //If it is, then asterisk is added 
            } else {
                result+=" "; //If it is not, then a space is added 
            }
        }
        result+="\n"; //adds newline character after each row of checkerboard is completed
    }

    return result; //Returns final result string, which represents checkerboard pattern
}