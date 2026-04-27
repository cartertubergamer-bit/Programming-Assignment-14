//
//  Truck.h
//  CIS 1202 - Inheritance, Polymorphism, and Virtual Functions
//
//  Created by Carter Cox on 4/26/26.
//

#ifndef TRUCK_H
#define TRUCK_H

#include "Vehicle.h"

class Truck : public Vehicle {
private:
    double towingCapacity;

public:
    Truck();
    Truck(string manufacturer, int yearBuilt, double towingCapacity);

    double getTowingCapacity() const;
    void setTowingCapacity(double towingCapacity);

    void displayInfo() const;
};

#endif
