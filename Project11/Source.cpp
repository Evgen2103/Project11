#include <iostream>
#include <vector>

std::vector<int> формирование_последовательности(const std::vector<int>& исходная) {
    std::vector<int> новая_последовательность;

    // Добавляем элементы с четными индексами
    for (int i = 0; i < исходная.size(); i += 2) {
        новая_последовательность.push_back(исходная[i]);
    }

    // Добавляем остальные элементы
    for (int i = 1; i < исходная.size(); i += 2) {
        новая_последовательность.push_back(исходная[i]);
    }

    return новая_последовательность;
}

int main() {
    setlocale(LC_ALL, "ru");
    std::vector<int> исходная = { 1, 2, 3, 4, 5, 6, 7, 8, 9 };
    std::vector<int> новая_последовательность = формирование_последовательности(исходная);

    std::cout << "Исходная последовательность:\n";
    for (int число : исходная) {
        std::cout << число << " ";
    }

    std::cout << "\nНовая последовательность:\n";
    for (int число : новая_последовательность) {
        std::cout << число << " ";
    }

    return 0;
}