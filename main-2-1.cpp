#include <iostream>
#include "Helicopter.h"
using namespace std;
int main() {
    
    Helicopter heli(5690, "Heli1");

    heli.set_fuel(80);

    heli.fly(45, 10);
    cout << "Fuel level after flight: " << heli.get_fuel() << "%" << endl;
    cout << "Number of flights: " << heli.get_numberOfFlights() << endl;

    return 0;
}