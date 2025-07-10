#include <iostream>
#include <string>
#include <vector>
#include <limits> 

int main() {
    std::string str;
    int numEnter;

    std::cout << "Text: ";
    std::getline(std::cin, str);
    std::cout << str << std::endl;

    std::cout << "Enter input num: ";
    std::cin >> numEnter;

    // Очистить \n после ввода числа
    std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');

    std::cout << "Enter input text:\n";

    for(int count = 1; count < numEnter; count++) {
        std::getline(std::cin, str);
    }

    std::cout << str << std::endl;
}
