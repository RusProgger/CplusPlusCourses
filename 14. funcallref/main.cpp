#include <iostream>

void funP(int *p) {
    *p = *p + 1;
    std::cout << "FunP: " << *p << "\n";
}

void funR(int &ref) {
    ++ref;
    std::cout << "funR: " << ref;
}

void funT(int* t) {

   *t = *t * 2;
   std::cout << "funT: " *t << std::endl;
}

int main() {
    int a = 10;
    funP(&a);

    int res = 100;
    funR(res);

    int tt = 20;

    std::cin.get();
    return 0;
}
