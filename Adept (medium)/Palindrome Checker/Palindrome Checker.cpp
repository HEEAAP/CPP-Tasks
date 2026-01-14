#include <iostream>
#include <string>
#include <cctype>

bool isPalindrome(const std::string& str);

int main(){
    std::string input;

    std::cout << "Enter a string for checking: ";
    std::getline(std::cin, input);

    if(isPalindrome(input))
        std::cout << "The string is a palindrome" << std::endl;
    else
        std::cout << "The string is not a palindrome" << std::endl;
    
    return 0;
}


/*
*   Checks whether the input string is a palindrome.
*   Comparison is case insensitive and ignores non-alphabetical characters
*/
bool isPalindrome(const std::string& str){
    if(str.empty()) return false;

    size_t left {0};
    size_t right = str.size() - 1;

    while(left < right){
        while(left < right && !std::isalpha(static_cast<unsigned char>(str[left]))) // Skip non-letter characters from left/right
            ++left;

        while(left < right && !std::isalpha(static_cast<unsigned char>(str[right])))
            --right;

        //convert both characters to lowercase and compare
        char leftChar = std::tolower(static_cast<unsigned char>(str[left]));
        char rightChar = std::tolower(static_cast<unsigned char>(str[right]));

        if(leftChar != rightChar){
            return false;
        }

        ++left;
        --right;
    }
    return true;
}