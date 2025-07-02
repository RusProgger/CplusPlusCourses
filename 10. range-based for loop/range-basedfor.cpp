#include <iostream>

int main() {

    setlocale(LC_ALL, "Russian");

    int arr[5]; // Массив на 5 элементов

    for(auto &x : arr) {

        std::cin >> x;
    }

    for (auto x : arr) {

        // Вывод массива 

        std::cout << x << " ";
    }




    std::cin.get();
    return 0;

}