//Name: Zara Amer
//CSCI 135
//2/19/23
//Task C of Lab 04: Write a program cross.cpp that takes an input size, and prints
//a diagonal cross of that dimension.

#include <iostream>
#include <string>
#include "main.h"

std::string cross(int size) {
    std::string result; //Create empty string var "result" that will store diagonal cross string.
    for (int i = 0; i < size; i++) { //Starts loop that will execute size i times, representing rows in cross shape
        for (int j = 0; j < size; j++) { //Starts loop that will execute size j times
                                        //Each iteration of this loop represents a column in the diagonal cross.
            if (i == j || i == size - j - 1) { //Check if current row index 'i' is equal to current column index 'j' || if current row index 'i' is equal to difference between size and current column index 'j' minus 1.
                result += "*"; //If either of these conditions is true, then asterisk is added 
            } else {
                result += " "; //If neither condition is true, then a space is added 
            }
        }
        result += "\n"; //adds a newline character to result string after each row of diagonal cross is completed.
    }

    return result; //Returns final result string, which represents the diagonal cross pattern 
}

