#include <iostream>
#include "AirVehicle.h"
using namespace std;

int main() {
    
    AirVehicle av1;
    
    AirVehicle av2(2000);

    av1.fly(30, 60);  
    
    cout << "Number of flights: " << av1.get_numberOfFlights() << endl;
    cout << "Fuel after flight: " << av1.get_fuel() << "%" << endl;

    av1.refuel();
    cout << "Fuel after refuel: " << av2.get_fuel() << "%" << endl;

    return 0;
}