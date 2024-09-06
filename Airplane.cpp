#include "Airplane.h"
using namespace std;

Airplane::Airplane() : weight(0), numPassengers(0), fuel(100.0), numberOfFlights(0) {}


Airplane::Airplane(int w, int p) : weight(w), numPassengers(p), fuel(100.0), numberOfFlights(0) {}


int Airplane::get_numPassengers() const {
    return numPassengers;
}


int Airplane::get_weight() const {
    return weight;
}

void Airplane::set_weight(int w) {
    weight = w;
}

double Airplane::get_fuel() const {
    return fuel;
}

void Airplane::set_fuel(double f) {
    fuel = f;
}

int Airplane::get_numberOfFlights() const {
    return numberOfFlights;
}

void Airplane::reducePassengers(int x) {
    numPassengers -= x;
    if (numPassengers < 0) {
        numPassengers = 0; 
    }
}

bool Airplane::canFly() const {
    return fuel > 20.0; 
}

void Airplane::fly(int headwind, int minutes) {
    if (canFly()) {
        return; 
    }

    double fuelConsumptionRate = (headwind >= 60) ? 0.005 : 0.0025; 
    double additionalFuelPerPassenger = 0.0001; 

    fuel -= (fuelConsumptionRate * minutes);
    if (numPassengers > 0) {
        fuel -= (additionalFuelPerPassenger * numPassengers * minutes);
    }

    if (fuel < 0) fuel = 0;

    if (fuel > 20) {
        numberOfFlights++;
    }
}