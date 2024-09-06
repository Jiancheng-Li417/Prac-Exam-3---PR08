#include <iostream>
#include "Airplane.h"
using namespace std;

int main() {
    
    Airplane plane(7000, 100);

    plane.set_fuel(95);

    plane.fly(65, 120);

    cout << "Fuel level after flight: " << plane.get_fuel() << "%" << endl;
    cout << "Number of passengers: " << plane.get_numPassengers() << endl;
    cout << "Number of flights: " << plane.get_numberOfFlights() << endl;

    return 0;
}