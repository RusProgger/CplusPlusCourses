#include <iostream>
#include <string>

int main() {

   int a = 100;

   int *b = &a;

   int &c = a;

   std::cout << " References:  " << a << std::endl; // Значение переменной а
   std::cout << " References:  " << b << std::endl; 
   std::cout << " References:  " << &c << std::endl;


   std::string name = "Alex";

   std::string* name2 = &name;

   std::string* name3 = name2;

   std::cout << "References name2 " << name << std::endl;
   std::cout << "References name2 " << &name << std::endl;
   std::cout << "References name2 " << name2 << std::endl;
   std::cout << "References name2 " << name3 << std::endl;

   std::cin.get();

 //  system("pause");
   return 0;
}
