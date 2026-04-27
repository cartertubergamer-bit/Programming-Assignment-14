//
//  Truck.cpp
//  CIS 1202 - Inheritance, Polymorphism, and Virtual Functions
//
//  Created by Carter Cox on 4/26/26.
//

#include "Truck.h"
#include <iostream>
using namespace std;

Truck::Truck() : Vehicle() {
    towingCapacity = 0.0;
}

Truck::Truck(string manufacturer, int yearBuilt, double towingCapacity)
    : Vehicle(manufacturer, yearBuilt) {
    this->towingCapacity = towingCapacity;
}

double Truck::getTowingCapacity() const {
    return towingCapacity;
}

void Truck::setTowingCapacity(double towingCapacity) {
    this->towingCapacity = towingCapacity;
}

void Truck::displayInfo() const {
    Vehicle::displayInfo();
    cout << "Towing Capacity: " << towingCapacity << endl;
}
