#ifndef AIRPLANE_H
#define AIRPLANE_H

#include <string>
#include <iostream>

// Базовий клас "Літак"
class Airplane {
protected:
    std::string model;
    int capacity;

public:
    Airplane();
    virtual ~Airplane();

    virtual void inputAirplane();
    virtual void displayAirplane() const;
    virtual double calculateServiceCost() const = 0; // Чисто віртуальний метод

    friend class FriendClass;
};

#endif
