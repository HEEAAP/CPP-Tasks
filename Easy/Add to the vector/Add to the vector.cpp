#include <iostream>
#include <vector>

std::vector<int> addToVector(std::vector<int>& arr, int num) {
    arr.push_back(num);
    return arr;
}