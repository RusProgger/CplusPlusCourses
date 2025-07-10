#include <iostream>
#include <string>
#include <vector>

int main() {

    std::string str;
    int numEnter;

    // enter text

    std::cout << "Text: ";
    std::getline(std::cin, str);

    std::cout << str << std::endl;

    std::cout << "Enter input num: ";
    std::cin >> numEnter;

    std::cout << "Enter input text: ";

    for(int count = 1; count < numEnter; count++ ) {
        std::getline(std::cin, str);
    }
    std::cout << str << std::endl;
}