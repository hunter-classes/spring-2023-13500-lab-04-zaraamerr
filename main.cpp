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
}