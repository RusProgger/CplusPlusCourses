#include <iostream>

int main() {
    
    // Cоздаем ряд
    const int rows = 3;
    // Cоздаем колонки
    const int cols = 3;
    
    // Используем цикл, чтобы не дублировать cout для поля
    
    for (int i = 0; i < rows; ++i) {
        for (int j = 0; j < cols; ++j) {
            std::cout << ". ";
        }
        std::cout << std::endl;
    }

    return 0;
}
