#include "cargo_plane.h"
#include <limits>

// Конструктор класу "Вантажний літак"
CargoPlane::CargoPlane() : cargoWeight(0) {}

// Деструктор класу "Вантажний літак"
CargoPlane::~CargoPlane() {}

// Перевизначення введення даних
void CargoPlane::inputAirplane() {
    Airplane::inputAirplane();
    while (true) {
        std::cout << "Введіть вагу вантажу (в кг): ";
        std::cin >> cargoWeight;
        if (std::cin.fail() || cargoWeight <= 0 || cargoWeight > capacity) {
            std::cerr << "Помилка: Вага вантажу має бути додатною і не перевищувати місткість літака (" << capacity << " кг). Спробуйте ще раз." << std::endl;
            std::cin.clear();
            std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
        } else {
            break;
        }
    }
}

// Перевизначення виведення даних
void CargoPlane::displayAirplane() const {
    Airplane::displayAirplane();
    std::cout << "Вага вантажу: " << cargoWeight << " кг" << std::endl;
}

// Перевизначення обчислення вартості обслуговування
double CargoPlane::calculateServiceCost() const {
    return cargoWeight * 0.5; // $0.50 за кг вантажу
}
