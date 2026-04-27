//
//  Vehicle.cpp
//  CIS 1202 - Inheritance, Polymorphism, and Virtual Functions
//
//  Created by Carter Cox on 4/26/26.
//

#include "Vehicle.h"
#include <iostream>
using namespace std;

Vehicle::Vehicle() {
    manufacturer = "";
    yearBuilt = 0;
}

Vehicle::Vehicle(string manufacturer, int yearBuilt) {
    this->manufacturer = manufacturer;
    this->yearBuilt = yearBuilt;
}

string Vehicle::getManufacturer() const {
    return manufacturer;
}

int Vehicle::getYearBuilt() const {
    return yearBuilt;
}

void Vehicle::setManufacturer(string manufacturer) {
    this->manufacturer = manufacturer;
}

void Vehicle::setYearBuilt(int yearBuilt) {
    this->yearBuilt = yearBuilt;
}

void Vehicle::displayInfo() const {
    cout << "Manufacturer: " << manufacturer << endl;
    cout << "Year Built: " << yearBuilt << endl;
}
