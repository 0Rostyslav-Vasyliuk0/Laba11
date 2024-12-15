#include "passenger_plane.h"
#include <limits>

// Конструктор класу "Пасажирський літак"
PassengerPlane::PassengerPlane() : numberOfPassengers(0) {}

// Деструктор класу "Пасажирський літак"
PassengerPlane::~PassengerPlane() {}

// Перевизначення введення даних
void PassengerPlane::inputAirplane() {
    Airplane::inputAirplane();
    while (true) {
        std::cout << "Введіть кількість пасажирів: ";
        std::cin >> numberOfPassengers;
        if (std::cin.fail() || numberOfPassengers <= 0 || numberOfPassengers > capacity) {
            std::cerr << "Помилка: Кількість пасажирів має бути додатною числовою і не перевищувати місткість літака (" << capacity << "). Спробуйте ще раз." << std::endl;
            std::cin.clear();
            std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
        } else {
            break;
        }
    }
}

// Перевизначення виведення даних
void PassengerPlane::displayAirplane() const {
    Airplane::displayAirplane();
    std::cout << "Кількість пасажирів: " << numberOfPassengers << std::endl;
}

// Перевизначення обчислення вартості обслуговування
double PassengerPlane::calculateServiceCost() const {
    return numberOfPassengers * 50.0; // $50 за кожного пасажира
}
