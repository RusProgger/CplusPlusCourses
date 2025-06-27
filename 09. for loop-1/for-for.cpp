#include <iostream>

int main() {
    const int rows = 3;
    const int cols = 3;

    // Создаем поле 
    char field[rows][cols] = {
        {'o', '.', 'x'},
        {'o', 'x', 'x'},
        {'x', '.', 'o'}
    };

    // Выводим поле
    for (int i = 0; i < rows; ++i) {
        for (int j = 0; j < cols; ++j) {
            std::cout << field[i][j] << ' ';
        }
        std::cout << std::endl;
    }
    std::cout << "Game over!\n";
    return 0;
}
