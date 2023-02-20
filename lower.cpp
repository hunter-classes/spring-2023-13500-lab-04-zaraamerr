//Name: Zara Amer
//2/19/23
//CSCI135
//Task D Lab 4: Write a program lower.cpp that prints the bottom-left half of a square, given the side length.

#include <iostream>
#include <string>
#include "main.h"

std::string lower(int length) {
    std::string result; //Create empty string var "result" that will store lower left half of triangle string.
    for (int i = 0; i < length; i++) {//Start loop that will execute length "i" times
                                      //Each iteration of loop represents a row in the lower left half triangle.
        for (int j = 0; j <= i; j++) { //Starts loop that will execute i+1 number of times, where i is current value of outer loop's index var.
                                      //Each iteration of this loop represents a column in the lower-left half of the triangle.

            result += "*"; //Adds asterisk to the result string for each iteration of the inner loop.
        }
        result += "\n"; //adds a newline character after row is completed
    }

    return result; //Returns final result string, which represents the lower-left half of the triangle pattern
}