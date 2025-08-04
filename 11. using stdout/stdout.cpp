#include <iostream>
#include <string>

int main() {

   // std::string name = "Ruslan";

    std::string name {"Dmitriy"};

    char s = name.at(2); // s

    std::cout << s << std::endl; // s
    
    std::cout << "Hello, World! " << std::endl;
    std::cout << "Hello, C++ " << std::endl;

    std::cout << "Name = " << name << "\n";

    // cin enter

    std::string user;

    std::getline(std::cin, user);
    
    std::cin.get();
    return 0;
}


