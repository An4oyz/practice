#include <iostream>

double convcert_speed(double speed_mps, double conversion_factor) {
  double speed_kmph = speed_mps * conversion_factor;
  return speed_kmph;
}

int main() {
  std::cout << "===== Перевод скорости в км/ч  через функию =====" << std::endl;
  const double conversion_factor = 3.6; // 1 м/с = 3.6 км/ч
  double speed_mps;                     // Скорость в метрах в секунду
  std::cout << "Введите скорость в метрах в секунду: ";
  std::cin >> speed_mps;
  if (speed_mps < 0) {
    std::cout << "Скорость не может быть отрицательной." << std::endl;
    return 1;
  } else {
    double speed_kmph = convcert_speed(speed_mps, conversion_factor);
    std::cout << "Скорость в км/ч: " << speed_kmph << std::endl;
  }
}