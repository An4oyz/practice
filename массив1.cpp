#include <iostream>

int main() {
  std::cout << "===== Давайте создадим массив целых чисел =====" << std::endl;
  while (true) {
    std::cout << "Введите размер массива: ";
    int size;
    std::cin >> size;
    if (size <= 0) {
      std::cout
          << "К сожелению так не получится, отрицательных массивов не бывает :("
          << std::endl;
    } else {
      int arr[size];
      std::cout << "Массив успешно создан! Но он пустой, давай заполним его "
                   "значениями, но будет ньюанс"
                << std::endl;
      std::cout << "Числа будут следуйщими: четные числа остаются прежними, а "
                   "не четные будут возведены в квадрат"
                << std::endl;
      int value = 0;
      int input = 2;
      while (value < size) {
        if (value % 2 == 0) {
          arr[value] = value;
          value++;
        } else {
          arr[value] = value * input;
          value++;
        }
      }
      std::cout << "Выводим массив на экран..." << std::endl;
      int index = 0;
      while (index < size) {
        std::cout << arr[index] << " ";
        index++;
      }
      break;
    }
  }
}