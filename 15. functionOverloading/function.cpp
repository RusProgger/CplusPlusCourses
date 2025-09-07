#include <iostream>

int summa(int a, int b) {
    return a + b;
}

float summa(float a, float b) {
    return a + b;
}



int main() {

    summa(10, 15);
    summa(55.5f, 10.2f);
    return 0;
}