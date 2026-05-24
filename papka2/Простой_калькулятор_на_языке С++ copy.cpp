#include <iostream>

int main() {

    char f;
    double a, b, c;

    std::cout << "Введите 1-е число: " << std::endl;
    std::cin >> a;

    std::cout << "Введите выражение(+, -, *, /):" << std::endl;
    std::cin >> f;

    std::cout << "Введите 2-е число: " << std::endl;
    std::cin >> b;

    // Проверка диапазона чисел
    if (a > 0 && a < 999 && b > 0 && b < 999) {

        if (f == '+') {
            c = a + b;
            std::cout << "Ответ: " << c << std::endl;
        }
        else if (f == '*') {
            c = a * b;
            std::cout << "Ответ: " << c << std::endl;
        }
        else if (f == '/') {
            if (b != 0) {
                c = a / b;
                std::cout << "Ответ: " << c << std::endl;
            } else {
                std::cout << "Ошибка: деление на ноль!" << std::endl;
            }
        }
        else if (f == '-') {
            c = a - b;
            std::cout << "Ответ: " << c << std::endl;
        }
        else {
            std::cout << "Вы ввели несуществующий символ!" << std::endl;
        }

    } else {
        std::cout << "Ошибка: числа должны быть больше 0 и меньше 999!" << std::endl;
    }

    return 0;
}
