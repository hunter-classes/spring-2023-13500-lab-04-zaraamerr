//Name: Zara Amer
//CSCI135
//2/19/23
//Task E for LAB 4: Write a program upper.cpp that prints the top-right half of a square, given the side length.

#include <iostream>
#include <string>
#include "main.h"

std::string upper(int length) {
    std::string result;
    // Print the upper-right half
    for (int i = 0; i < length; i++) {
        for (int j = 0; j < length; j++) {
            if (j < i) {
                result += " ";
            } else {
                result += "*";
            }
        }
        result += "\n";
    }

    return result;
}
