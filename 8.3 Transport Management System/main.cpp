#include <iostream>
using namespace std;

class Vehicle {
protected:
    int speed;

public:
    void setSpeed(int s) {
        speed = s;
    }
};

class Bus : public Vehicle {
public:
    void showBus() {
        cout << "Bus Speed: " << speed << endl;
    }
};

class Truck : public Vehicle {
public:
    void showTruck() {
        cout << "Truck Speed: " << speed << endl;
    }
};
int main() {
    Bus b;
    Truck t;

    b.setSpeed(60);
    t.setSpeed(50);

    b.showBus();
    t.showTruck();
 return 0; }
