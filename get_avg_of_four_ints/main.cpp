/*
Author: Aidan Newland
Date: 9/30/26
Verson: v1.0
Purpose: Gets the average of four different integers, and prints them to the output.
*/

#include <iostream>

float getAverageOfFour(int firstNum, int secondNum, int thirdNum, int fourthNum) {
    float result = (firstNum + secondNum + thirdNum + fourthNum) / 4.0;
    
    return result;
}

int main() {

    float result = getAverageOfFour(2, 3, 4, 5);
    std:: cout << "The average of these four numbers is: " << result << std::endl;

    return 0;
}