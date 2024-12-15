#ifndef FRIEND_CLASS_H
#define FRIEND_CLASS_H

#include "passenger_plane.h"
#include "cargo_plane.h"

// Дружній клас
class FriendClass {
public:
    void inputPassengerPlane(PassengerPlane& plane);
    void inputCargoPlane(CargoPlane& plane);
    void displayPassengerPlane(const PassengerPlane& plane) const;
    void displayCargoPlane(const CargoPlane& plane) const;
    double calculatePassengerServiceCost(const PassengerPlane& plane) const;
    double calculateCargoServiceCost(const CargoPlane& plane) const;
};

#endif
