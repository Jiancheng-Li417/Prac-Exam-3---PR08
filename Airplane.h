#ifndef AIRPLANE_H
#define AIRPLANE_H

#include <string>
using namespace std;

class Airplane {
private:
    int weight;
    int numPassengers;
    float fuel;
    int numberOfFlights;

public:
    
    Airplane();

    Airplane(int w, int p);

    int get_numPassengers() const;

    int get_weight() const;
    void set_weight(int w);

    float get_fuel() const;
    void set_fuel(float f);

    int get_numberOfFlights() const;

    void reducePassengers(int x);

    void fly(int headwind, int minutes);

    bool canFly() const;
};

#endif 