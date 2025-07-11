#include <iostream>

void funN(int a) {
   ++a;
   std::cout << "Fuction funN: " << a;
}

int main() {
    int a = 1;
    std::cout << "A: " << a << std::endl;
    
    funN(a);

    std::cin.get();
    return 0;
}
