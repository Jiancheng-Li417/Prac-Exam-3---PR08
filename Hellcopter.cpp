#include "Helicopter.h"
using namespace std;
Helicopter::Helicopter() : weight(0), name(""), fuel(100.0), numberOfFlights(0) {}

Helicopter::Helicopter(int w, string n) : weight(w), name(n), fuel(100.0), numberOfFlights(0) {}

int Helicopter::get_weight() const {
    return weight;
}

void Helicopter::set_weight(int w) {
    weight = w;
}

std::string Helicopter::get_name() const {
    return name;
}

void Helicopter::set_name(const string& n) {
    name = n;
}

double Helicopter::get_fuel() const {
    return fuel;
}

void Helicopter::set_fuel(double f) {
    fuel = f;
}

int Helicopter::get_numberOfFlights() const {
    return numberOfFlights;
}

bool Helicopter::canFly() const {
    return fuel > 20.0; 
}

void Helicopter::fly(int headwind, int minutes) {
    if (!canFly()) {
        return; 
    }

    double fuelConsumptionRate = (headwind >= 40) ? 0.004 : 0.0018; 
    double additionalFuelPerKg = 0.0001; 

    
    fuel -= (fuelConsumptionRate * minutes);
    if (weight > 5670) {
        fuel -= (additionalFuelPerKg * (weight - 5670) * minutes);
    }

    
    if (fuel < 0) fuel = 0;

    
    if (fuel > 20) {
        numberOfFlights++;
    }
}