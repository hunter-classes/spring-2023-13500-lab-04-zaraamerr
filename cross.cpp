//Name: Zara Amer
//CSCI 135
//2/19/23
//Task C of Lab 04: Write a program cross.cpp that takes an input size, and prints
//a diagonal cross of that dimension.

#include <iostream>
#include <string>
#include "main.h"

std::string cross(int size) {
    std::string result;
    // Print the diagonal cross
    for (int i = 0; i < size; i++) {
        for (int j = 0; j < size; j++) {
            if (i == j || i == size - j - 1) {
                result += "*";
            } else {
                result += " ";
            }
        }
        result += "\n";
    }

    return result;
}

