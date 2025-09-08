// реализация функции по умолчанию находится в файле Myfunction.h

#include "Myfunction.h"

int MyFunctionIntResult(int* a, int* b) {
    return *a + *b;
}

float MyFunctionIntResult(float* a, float* b) {
    return *a * *b;
}

double MyFunctionIntResult(double* a, double* b) {
    return *a / *b;
}