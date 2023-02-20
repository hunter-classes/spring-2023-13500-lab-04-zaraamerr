#include <iostream>
#include <string>
#include "main.h"

int main(){
    std::string result;
    result = box(4,7);
    std::cout << "box(4,7):\n";
    std::cout << result;
    std::string result2;
    result2 = checkerboard(11,6);
    std::cout << "checkerboard(11,6):\n";
    std::cout << result2;
    std::string result3;
    result3 = cross(8);
    std::cout << "cross(8):\n";
    std::cout << result3;
    std::string result4;
    result4 = lower(6);
    std::cout << "lower(6):\n";
    std::cout << result4;
    std::string result5;
    result5 = upper(6);
    std::cout << "upper(6):\n";
    std::cout << result5;
    std::string result6;
    result6 = trapezoid(12,5);
    std::cout << "trapezoid(12,5):\n";
    std::cout << result6;
    std::string result7;
    result7 = trapezoid(12,15);
    std::cout << "trapezoid(12,15):\n";
    std::cout << result7;
    std::string result8;
    result8 = checkerboard3x3(16,11);
    std::cout << "checkerboard3x3(16,11):\n";
    std::cout << result8;
}