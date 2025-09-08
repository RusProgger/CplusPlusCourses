#include <iostream>
#include "Myfunction.h"

int main() {


    int a_f = 10;
    int b_p = 20;

    int resultTestInt = MyFunctionIntResult(&a_f, &b_p);
    float resultTestFloat = MyFunctionIntResult(&a_f, &b_p);
    double resultTestDouble = MyFunctionIntResult(&a_f, &b_p);

    std::cout << resultTestInt << std::endl;
    std::cout << resultTestFloat << std::endl;
    std::cout << resultTestDouble << std::endl;

    return 0;
}