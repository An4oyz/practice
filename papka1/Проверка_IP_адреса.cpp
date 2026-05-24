#include <iostream>
#include <string>

//функция проверки октета
//цисло от 0 до 255 и нет ведущего 0
bool okteta (std::string is_okteta) {
    if (is_okteta.length() > 3 || is_okteta.length() == 0) return false;
    if (is_okteta [0] == '0' && is_okteta.length() > 1) return false;
    for (char c : is_okteta) {
        if (c < '0' || c > '9') return false;
    }
    int number = std::stoi(is_okteta);
    return (number >= 0 && number <= 255);
}

//функция проверки IP адреса
//проверка каждого сигмента
bool valid_is_valid(std::string& ip) {

    int dotsCount = 0;
    std::string oktet = "";
    for (char c : ip) {
        if (c == '.') {
            if (!okteta (oktet)) return false;
            oktet = "";
            dotsCount++;
        } else {
            oktet += c;
        }
    }
    if (dotsCount != 3) return false;
    return okteta(oktet);
}
//сам код программы
//необходимо продолжить
int main () {
    std::string ip;
    std::cout << "Enter IP address\n";
    std::cin >> ip;

    if (valid_is_valid(ip)) {
        std::cout << "Valid\n";
    } else {
        std::cout << "Invalid";
    }
}