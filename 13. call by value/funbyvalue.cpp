#include <iostream>

void funA(int a) {
   ++a;
   std::cout << "Fuction funN: " << a << std::endl;
}

void funB(float b) {
    std::cout << "FunB: " << b << "\n";
    
}

int main() {
    int a = 1;
    float b = 50.5;
    std::cout << "A: " << a << std::endl;

    std::cout << "B: " << b << std::endl;
    
    funA(a);
    funB(b);

    return 0;

}
