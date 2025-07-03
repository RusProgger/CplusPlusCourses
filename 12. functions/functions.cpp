#include <iostream>

void textHello() {
    std::cout << "Hello, me function" << std::endl;
}

void textHello_1() {
    std::cout << "Function - 1" << std::endl;
}

void textHello_2() {
    std::cout << "Function - 2" << std::endl;
}


int numberPlus(int a, int b) {
    return a + b;
}

int numberMinus(int a, int b) {
    return a - b;
}

int numberDel(int a, int b) {
    if(b == 0) {
        std::cout << "Error";
        return 0;
    }
    return a / b;
}

int numberM(int a, int b) {
    return a * b;
}

int main() {

    int x = 10;

    int res_Plus = numberPlus(10, 39);
    int res_Minus = numberMinus(1, 10);
    int res_Del = numberDel(1, 0);
    int res_M = numberM(10, 39);

    textHello();

    textHello_1();

    textHello_2();

    // функция int

    std::cout << res_Plus << std::endl;
    std::cout << res_Minus << std::endl;
    std::cout << res_Del << std::endl;
    std::cout << res_M << std::endl;


    std::cin.get();
    return 0;
    
}
