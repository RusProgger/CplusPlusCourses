#include <iostream>
#include <string>

int main() {

   // std::string name = "Ruslan";

    std::string name {"Ruslan"};

    char s = name.at(2); // s

    std::cout << s << std::endl; // s
    
    std::cout << "Hello, World! " << std::endl;
    std::cout << "Hello, C++ " << std::endl;

    std::cout << "Name = " << name << "\n";
    
    std::cin.get();
    return 0;
}
