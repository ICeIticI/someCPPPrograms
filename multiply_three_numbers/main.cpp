/*
Author: Aidan Newland
Date: 9/30/26
Verson: v1.0
Purpose: Gets the product of three different numbers, and displays them to output
*/

#include <iostream>

int main() {

    int firstNum = 2;
    int secondNum = 3;
    int thirdNum = 4;

    int product = firstNum * secondNum * thirdNum;

    std::cout << "The product of the three integers is: " << product << std::endl;

    return 0;
}