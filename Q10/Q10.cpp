#include <iostream>

int stringLength(const char* str) {
    int length = 0;
    while (str[length] != '\0') {
        length++;
    }
    return length;
}

int main() {
    const int MAX_LENGTH = 100;
    char str[MAX_LENGTH];
    
    std::cout << "Enter a string: ";
    std::cin.getline(str, MAX_LENGTH);
    
    int length = stringLength(str);
    std::cout << "Length of the string: " << length << std::endl;
    
    return 0;
}
