//Name: Zara Amer
//2/19/23
//CSCI135
//Task D Lab 4: Write a program lower.cpp that prints the bottom-left half of a square, given the side length.

#include <iostream>
#include <string>
#include "main.h"

std::string lower(int length) {
    std::string result;
    // Print the lower-left half
    for (int i = 0; i < length; i++) {
        for (int j = 0; j <= i; j++) {
            result += "*";
        }
        result += "\n";
    }

    return result;
}