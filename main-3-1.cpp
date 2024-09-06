#include <iostream>
#include "AirFleet.h"
using namespace std;
int main() {
    
    AirFleet fleet;

    AirVehicle** airFleet = fleet.get_fleet();

    for (int i = 0; i < 5; ++i) {
        cout << "AirVehicle " << i+1 << ": " << endl;
        
        cout << "" << endl;
    }

    return 0;
}