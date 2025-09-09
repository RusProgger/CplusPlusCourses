#include <iostream>
#include "Myfunction.h"
#include <iomanip>
#include <string>

int main() {


    int a_f = 10;
    int b_p = 20;

    float d_p = 11.5f;
    float g_p = 15.2f;

    double r_p = 55.3;
    double t_p = 10.9;

    int resultTestInt = MyFunctionIntResult(&a_f, &b_p);
    float resultTestFloat = MyFunctionIntResult(&d_p, &g_p);
    double resultTestDouble = MyFunctionIntResult(&r_p, &t_p);

    std::cout << resultTestInt << std::endl;
    std::cout << resultTestFloat << std::endl;
    std::cout << std::fixed << std::setprecision(2) << resultTestDouble << std::endl;

    std::cin.get();
    return 0;
}