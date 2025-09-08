#include <iostream>
#include "Myfunction.h"

int main() {


    int a_f = 10;
    int b_p = 20;

    int resultTest = MyFunctionIntResult(&a_f, &b_p);

    std::cout << resultTest << std::endl;

    return 0;
}