//
//  Vehicle.h
//  CIS 1202 - Inheritance, Polymorphism, and Virtual Functions
//
//  Created by Carter Cox on 4/26/26.
//

#ifndef VEHICLE_H
#define VEHICLE_H

#include <string>
using namespace std;

class Vehicle {
private:
    string manufacturer;
    int yearBuilt;

public:
    Vehicle();
    Vehicle(string manufacturer, int yearBuilt);

    string getManufacturer() const;
    int getYearBuilt() const;

    void setManufacturer(string manufacturer);
    void setYearBuilt(int yearBuilt);

    void displayInfo() const;
};

#endif
