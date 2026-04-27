//
//  Car.h
//  CIS 1202 - Inheritance, Polymorphism, and Virtual Functions
//
//  Created by Carter Cox on 4/26/26.
//

#ifndef CAR_H
#define CAR_H

#include "Vehicle.h"

class Car : public Vehicle {
private:
    int numDoors;

public:
    Car();
    Car(string manufacturer, int yearBuilt, int numDoors);

    int getNumDoors() const;
    void setNumDoors(int numDoors);

    void displayInfo() const;
};

#endif
