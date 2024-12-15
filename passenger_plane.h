#ifndef PASSENGER_PLANE_H
#define PASSENGER_PLANE_H

#include "airplane.h"

// Клас "Пасажирський літак"
class PassengerPlane : public Airplane {
private:
    int numberOfPassengers;

public:
    PassengerPlane();
    ~PassengerPlane();

    void inputAirplane() override;
    void displayAirplane() const override;
    double calculateServiceCost() const override;

    friend class FriendClass;
};

#endif
