// Carter Cox
// CIS 1202 - Inheritance, Polymorphism, and Virtual Functions
// 4/26/26

#include <iostream>
#include "Vehicle.h"
#include "Car.h"
#include "Truck.h"

using namespace std;

int main() {

    string manufacturer;
    int yearBuilt;

    // VEHICLE
    cout << "Enter Vehicle Manufacturer: ";
    getline(cin, manufacturer);
    cout << "Enter Year Built: ";
    cin >> yearBuilt;
    cin.ignore();

    Vehicle v(manufacturer, yearBuilt);
    cout << "\n--- Vehicle Info ---\n";
    v.displayInfo();

    // CAR
    int doors;
    cout << "\nEnter Car Manufacturer: ";
    getline(cin, manufacturer);
    cout << "Enter Year Built: ";
    cin >> yearBuilt;
    cout << "Enter Number of Doors: ";
    cin >> doors;
    cin.ignore();

    Car c(manufacturer, yearBuilt, doors);
    cout << "\n--- Car Info ---\n";
    c.displayInfo();

    // TRUCK
    double towing;
    cout << "\nEnter Truck Manufacturer: ";
    getline(cin, manufacturer);
    cout << "Enter Year Built: ";
    cin >> yearBuilt;
    cout << "Enter Towing Capacity: ";
    cin >> towing;

    Truck t(manufacturer, yearBuilt, towing);
    cout << "\n--- Truck Info ---\n";
    t.displayInfo();

    return 0;
}
