#include <iostream>

void reverseString(char* str) {
    // Find the length of the string
    int length = 0;
    while (str[length] != '\0') {
        length++;
    }
    
    // Reverse the string in-place
    int start = 0;
    int end = length - 1;
    
    while (start < end) {
        str[start] ^= str[end];
        str[end] ^= str[start];
        str[start] ^= str[end];
        
        start++;
        end--;
    }
}

int main() {
    const int MAX_LENGTH = 100;
    char str[MAX_LENGTH];
    
    std::cout << "Enter a string: ";
    std::cin.getline(str, MAX_LENGTH);
    
    reverseString(str);
    
    std::cout << "The reversed string is: " << str << std::endl;
    
    return 0;
}
