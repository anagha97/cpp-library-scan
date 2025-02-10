#include <iostream>
#include <string>

void printUserInput(std::string userInput) {
    std::cout << userInput; // Potential XSS vulnerability
}

int main() {
    std::string userInput;
    std::cout << "Enter some text: ";
    std::cin >> userInput;
    printUserInput(userInput);
    return 0;
}
