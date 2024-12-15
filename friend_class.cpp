#include "friend_class.h"

void FriendClass::inputPassengerPlane(PassengerPlane& plane) {
    plane.inputAirplane();
}

void FriendClass::inputCargoPlane(CargoPlane& plane) {
    plane.inputAirplane();
}

void FriendClass::displayPassengerPlane(const PassengerPlane& plane) const {
    plane.displayAirplane();
}

void FriendClass::displayCargoPlane(const CargoPlane& plane) const {
    plane.displayAirplane();
}

double FriendClass::calculatePassengerServiceCost(const PassengerPlane& plane) const {
    return plane.calculateServiceCost();
}

double FriendClass::calculateCargoServiceCost(const CargoPlane& plane) const {
    return plane.calculateServiceCost();
}
