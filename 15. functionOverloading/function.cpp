#include <iostream>

int summa(int a, int b) {
    return a + b;
}

float summa(float a, float b) {
    return a + b;
}



int main() {

    int resSummaPlus =  summa(10, 15);
    float resSummaPlusFloat = summa(55.5f, 10.2f);

    std::cout << resSummaPlus << std::endl;
    std::cout << resSummaPlusFloat << std::endl;

    return 0;
}