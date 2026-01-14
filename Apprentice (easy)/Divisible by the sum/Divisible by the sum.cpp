#include <iostream>
#include <string>

std::string checkDivisibility(int num1, int num2) {
    int num3 = num1 + num2;

    return (num1 * num2) % num3 == 0 ? "Divisible" : "Not divisible";
}