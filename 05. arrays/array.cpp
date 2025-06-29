/* 

    .size() — возвращает размер

    .at(i) — доступ с проверкой границ

    .front() / .back() — первый/последний элемент

    .fill(value) — заполнить массив значением

    .begin() / .end() — итераторы


*/



#include <iostream>


int main() {
    
    int numb[] = {1, 5, 10, 55, 64, 38};

    std::cout << numb[1] << std::endl;



    std::string user[5];

    user[0] = "Alex";
    user[1] = "Anjeli";
    user[2] = "Ivan";
    user[3] = "Tolik";
    user[4] = "Julia";

    std::cout << "User = " << user[4] << std::endl;

    int res = sizeof(user) / sizeof(user[0]);

    std::cout << "Width array: " << res << std::endl;

    std::cin.get();

    return 0;
}
