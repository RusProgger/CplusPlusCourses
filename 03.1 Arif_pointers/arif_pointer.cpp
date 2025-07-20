#include <iostream>
#include <iomanip>

int main() {

    // INT 
    int n = 0;

    // ENTER MESSAGE
    std::cout << "Enter count polygon: ";
    std::cin >> n;

    int* b = (int*)200;

    std::cout << "Pointer memory int: " << size_t(b + 2) << std::endl;

    char* s = (char*)600;

    std::cout << "Pointer memory char: " << std::setw(n) << size_t(s + 2) << std::endl;

    int* r = (int*)1000;

    std::cout << "Pointer memory int r: " << std::setw(r) << size_t(r +12) << std::endl; 

    std::cin.get();

    return 0;


}
