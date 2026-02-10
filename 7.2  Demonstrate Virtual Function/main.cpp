#include <iostream>
using namespace std;

class Base {
public:
    virtual void display() {
        cout << "Display function of Base class" << endl;
    }
};

class Derived : public Base {
public:
    void display() {
        cout << "Display function of Derived class" << endl;
    }
};
int main() {
    Base* b;
    Derived d;

    b = &d;
    b->display();   // Calls Derived class func on
    return 0;
}
