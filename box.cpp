//Name:Zara Amer
//Date: 2/19/23
//CS135
//Task A of Lab 4: Write a program box.cpp that takes an input of width and height and prints
//a solid rectangular box of the requested size using asterisks.

#include <iostream>
#include <string>
#include "main.h"

std::string box(int width, int height){
    std::string result; //Create empty string var "result" that will store box string.
    for (int i=0; i < height; i++){ //Start loop that will execute height "i" times
                                    //Each iteration of the loop represents a row in the box.
        for (int j= 0; j < width; j++){ //Start loop that will execute width "i" times
                                        //Each iteration of this loop represents a column in the box.
            result+= "*"; //Adds asterisk to result string each time inner loop executes.
        }
        result+= "\n"; //Adds newline character to result string after each row of box is completed.
    }
    return result; //Returns final result string, which represents box
}