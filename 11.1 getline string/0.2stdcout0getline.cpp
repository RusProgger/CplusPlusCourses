#include <iostream>
#include <string>

int main() {

    std::string str;

    // enter text

    std::cout << "Text: ";
    std::getline(std::cin, str);

    std::cout << str << std::endl;

}