#include <iostream>

double calculateProbability(int totalThrows, int successfulThrows) {
    return static_cast<double>(successfulThrows) / totalThrows;
}