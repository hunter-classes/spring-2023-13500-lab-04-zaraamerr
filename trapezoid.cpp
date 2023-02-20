//Name: Zara AMER
//CSCI135
//2/19/23
//Task F Lab 4: Write a program trapezoid.cpp that prints an upside-down trapezoid of 
//given width and height. However, if the input height is impossibly large for the given
//width, then the program should report, Impossible shape!

#include <iostream>
#include <string>
#include "main.h"

std::string trapezoid(int width, int height){
    std::string result; //Create empty string var "result" that will store trapezoid string.
    if (height > width / 2 + 1) { //This checks if height of trapezoid is greater than width / 2 + 1.
                                 //This is because a trapezoid shape cannot be formed if height is greater than half of width plus one.
        result = "Impossible shape!\n"; //If it is, the function returns the string "Impossible shape".
        return result;
    }
    for (int i = 0; i < height; i++) { //Starts loop that will execute height i times
                                    //Each iteration of loop represents a row in trapezoid.
        for (int j = 0; j < i; j++) { //Starts loop that will execute j number of times
                                    //This loop adds spaces to the result string for each row of the trapezoid.
            result += " ";
        }
        for (int j = 0; j < width - i * 2; j++) { //Starts a loop that will execute width - i * 2 number of times
                                                //Adds asterisks to the result string for each row of the trapezoid.
            result += "*";
        }
        result += "\n"; //adds newline character
    }
    return result; //Returns the final result string, which represents the trapezoid pattern
}