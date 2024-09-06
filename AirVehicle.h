#ifndef AIRVEHICLE_H
#define AIRVEHICLE_H
using namespace std;

class AirVehicle {
private:
    int weight;
    double fuel;
    int numberOfFlights;

public:

    AirVehicle();

    AirVehicle(int w);
    
    int get_weight() const;

    void set_weight(int w);

    double get_fuel() const;
 
    void set_fuel(double f);

    int get_numberOfFlights() const;

    void set_numberOfFlights(int n);

    void refuel();

    virtual void fly(int headwind, int minutes);
};

#endif