//Name: Zara Amer
//CSCI135
//2/19/23
//Task E for LAB 4: Write a program upper.cpp that prints the top-right half of a square, given the side length.

#include <iostream>
#include <string>
#include "main.h"

std::string upper(int length) {
    std::string result; //Create empty string var "result" that will store upper right half of triangle string.
    for (int i = 0; i < length; i++) { //Start loop that will execute length "i" times
                                      //Each iteration of loop represents a row in the upper right half of the triangle.
        for (int j = 0; j < length; j++) { //This starts a loop that will execute length number of times
                                          //Each iteration of this loop represents a column in the upper-right half of the triangle.
            if (j < i) { //Checks if current value of j is less than current value of i
                result += " "; //If it is, then a space character is added to the result string.
            } else {
                result += "*"; //Otherwise, an asterisk is added to the result string.
            }
        }
        result += "\n"; //adds a newline character to result string after each row of triangle is completed.
    }

    return result; //Returns final result string, which represents upper-right half of the triangle pattern 
}
