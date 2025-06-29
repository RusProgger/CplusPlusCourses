#include <iostream>

int main() {

    // int enter = 0;
    // int i = 1;
    // std::cout << "Enter number: ";
    // std::cin >> enter;

    // while(i <= enter) {
    //     std::cout << "----------------------" << std::endl;
    //     std::cout << "Enter number = " << i << std::endl;
    //     i++;
    // }

    

    int enter = 0;

    do {
        std::cout << "Enter number (0 to exit): ";
        std::cin >> enter;

        if (enter == 0) {
            break; // выходим из цикла
        }

        int i = 1;
        while (i <= enter) {
            std::cout << "----------------------" << std::endl;
            std::cout << "Enter number = " << i << std::endl;
            i++;
        }

    } while (true); // цикл продолжается, пока пользователь не введет 0 для выхода из программы

    std::cout << "Program finished." << std::endl;

    std::cin.get();

    return 0;
}
