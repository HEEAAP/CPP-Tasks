#include <iostream>
#include <string>

/*
 * Check if the character is uppercase
 */
int countUppercaseValue(const std::string& str){
    size_t count{};

    for(size_t i = 0; i < str.size(); i++)
    {
        if(std::isupper(static_cast<unsigned char>(str[i])))
            ++count;
    }
    
    return count;
}

/*
 * Reject non alphabetic letters except spaces
*/
bool isValidInput(const std::string& str){
    for(char c : str)
        if(!std::isalpha(static_cast<unsigned char>(c)) && c != ' ')
            return false;
    return true;
}

int main(){
    std::string input{};

    do{
        std::cout << "Enter a string for checking: ";
        std::getline(std::cin, input);

        if(!isValidInput(input))
            std::cout << "Invalid input! Use only alphabetic letters" << std::endl;
    }while(!isValidInput(input));

    size_t capitalCount = countUppercaseValue(input);
    std::cout << "The string has " << capitalCount << " capital letters" << std::endl;

    return 0;
}
