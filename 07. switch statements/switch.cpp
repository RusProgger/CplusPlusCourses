#include <iostream>
#include <cmath>

// создаем функцию для вывода числа если пользователь введет число 10

void text_Message() {
    std::cout << "Вы нажали на лисло 10: " << std::endl;
}

int res_Square(int a, int b) {
    return a + b;
}

int main() {

    setlocale(LC_ALL, "Russian");

    int enter = 0; // для безопасности. 
    // лучше так не делать int enter;

    std::cout << "Введите число: ";
    std::cin >> enter;

    switch(enter) {
        case 1: 
        case 2:
        case 3:
        case 4:
        case 5:
            std::cout << "Ошибка вы ввели число " << enter;
            break;    
        case 10:
            text_Message();
            break;
        case 11:
            std::cout << res_Square(11, 11) << std::endl;
            break;
        default:
            std::cout << "Такое число не зарегистрированное." << std::endl;       
    }

}