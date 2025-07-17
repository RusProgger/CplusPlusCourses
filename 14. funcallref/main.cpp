#include <iostream>

void funP(int *p) {
    *p = *p + 1;
    std::cout << "FunP: " << *p << "\n";
}

void funR(int &ref) {
    ++ref;
    std::cout << "funR: " << ref;
}

int main() {
    int a = 10;
    funP(&a);

    int res = 100;
    funR(res);

    return 0;
}
