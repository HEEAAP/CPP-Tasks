#include <iostream>
#include <cstring>

/*
*   Compare two strings in a case-insensitive manner.
*   Returns true if they are the same, false otherwise.
*/
bool compareStrings(const std::string& a, const std::string& b){
    if (a.size() != b.size()) return false; // Quick check for different lengths

    for(size_t i = 0; i < a.size(); ++i){
        if (tolower(static_cast<unsigned char>(a[i])) != tolower(static_cast<unsigned char>(b[i]))){
            return false;
        }
    }
    return true;
}

int main(){
    std::string str1, str2;

    std::cout << "Enter string A: ";
    std::getline(std::cin, str1);
    std::cout << "Enter string B: ";
    std::getline(std::cin, str2);
    
    if(compareStrings(str1, str2))
        std::cout << "Strings are the same" << std::endl;
    else
        std::cout << "Strings differ!" << std::endl;

    return 0;
}
