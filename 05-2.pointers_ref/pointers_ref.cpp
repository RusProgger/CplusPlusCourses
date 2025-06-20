#include <iostream>

int main() {

    setlocale(LC_ALL, "Rus");
    int age = 0;

    std::wcout << L"Привет введите ваш возраст: ";
    std::wcin >> age;

    int* res = &age;

    if(*res >= 18) {
        std::wcout << L"Вход открыт. " << *res << std::endl;
    } 
    else if(*res >= 50) {
        std::wcout << L"Вы ужке в возрасте. " << *res << std::endl;
    }
    else if(*res >= 70 && *res <= 100){
        std::wcout << L"Вы уже слишком старый. " << *res << std::endl;
    }
    else {
        std::wcout << L"Нет такого возраста. " << *res << std::endl;
    }

    return 0;
    
}