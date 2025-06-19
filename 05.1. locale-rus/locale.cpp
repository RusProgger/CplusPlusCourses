#include <iostream>
#include <string>
#include <locale>

int main() {
    // std::locale::global(std::locale("")); // Почему то не работает на g++

    setlocale(LC_ALL, "Russian");

    std::wstring name;
    int password;

    std::wcout << L"Введите ваш логин: ";
    std::wcin >> name;

    std::wcout << L"Введите ваш пароль: ";
    std::wcin >> password;

    if(name == L"Alex" && password == 188294) {
        std::wcout << L"Вход выполнен" << std::endl;
    }

    else if (name == L"Alex" && password != 188294) {
        std::wcout << L"Логин действительный, пароль не верный" << std::endl;
    }

    else if (name != L"Alex" && password == 188294) {
        std::wcout << L"Логин неверный, пароль верный." << std::endl;
    }

    else {
        std::wcout << L"Неверный логин или пароль" << std::endl;
    }
    
    return 0;
}