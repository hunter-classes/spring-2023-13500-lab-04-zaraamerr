#include <iostream>
#include <string>
#include "main.h"

int main (){
    std::string result;
    result = box(4,7);
    std::cout << "box(4,7):\n";
    std::cout << result;
    std::string result2;
    result2 = checkerboard(11,6);
    std::cout << "checkerboard(11,6):\n";
    std::cout << result2;
}