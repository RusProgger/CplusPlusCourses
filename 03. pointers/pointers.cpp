#include <iostream>


int main(int argc, char** argv) {
    
    int a = 10;
    int b = 25;
    int *res = &b;

    std::cout << "res = " << *res << std::endl;

    std::cin.get();

    return 0;
}
