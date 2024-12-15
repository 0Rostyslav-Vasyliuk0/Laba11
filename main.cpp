#include <iostream>
#include "passenger_plane.h"
#include "cargo_plane.h"

// Функція для виведення інформації про літак
void displayPlaneInfo(const Airplane& plane) {
    plane.displayAirplane(); // Виклик перевизначеного віртуального методу
    std::cout << "Вартість обслуговування: $" << plane.calculateServiceCost() << "\n" << std::endl;
}

int main() {
    PassengerPlane passengerPlane;
    CargoPlane cargoPlane;

    // Введення даних
    std::cout << "Введення даних пасажирського літака:" << std::endl;
    passengerPlane.inputAirplane();

    std::cout << "\nВведення даних транспортного літака:" << std::endl;
    cargoPlane.inputAirplane();

    // Виведення інформації через загальну функцію
    std::cout << "\nІнформація про пасажирський літак:" << std::endl;
    displayPlaneInfo(passengerPlane);

    std::cout << "\nІнформація про вантажний літак:" << std::endl;
    displayPlaneInfo(cargoPlane);

    return 0;
}

