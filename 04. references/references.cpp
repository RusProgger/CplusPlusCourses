#include <iostream>

int main() {

   int a = 100;

   int *b = &a;

   int &c = a;

   std::cout << " References:  " << a << std::endl; // Значение переменной а
   std::cout << " References:  " << b << std::endl; 
   std::cout << " References:  " << &c << std::endl;

   system("pause");
   return 0;
}