#include <iostream>
#include <string>

// Задание 4: Функция square с использованием auto
auto square(int x) -> int {
    return x * x;
}

// Задание 7: Функция факториала (сгенерирована GigaCode)
int factorial(int n) {
    if (n <= 1) return 1;
    return n * factorial(n - 1);
}

int main() {
    // Задание 2: Вывод приветствия
    std::cout << "Hello, World!" << std::endl;

    // Вывод имени студента
    std::string name = "Кирилл Кирилов";
    std::cout << "Студент: " << name << std::endl;

    // Вывод даты
    std::cout << "Дата: 2026-10-08" << std::endl;

    // Демонстрация работы функции square
    auto number{7}; // Униформ-инициализация
    auto result = square(number);
    std::cout << "Число: " << number << ", Квадрат: " << result << std::endl;

    // Демонстрация работы функции factorial
    int fact_num = 5;
    std::cout << "Факториал " << fact_num << " равен: " << factorial(fact_num) << std::endl;

    return 0;
}