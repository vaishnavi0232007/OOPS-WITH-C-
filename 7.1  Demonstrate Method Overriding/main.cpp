#include <iostream>
using namespace std;
class Base {
public:
    void show() {
        cout << "Show func on of Base class" << endl;
    }
};

class Derived : public Base {
public:
    void show() {
        cout << "Show function of Derived class" << endl;
    }
};
int main() {
    Derived d;
    d.show();   // Calls Derived class func on
    return 0;
}
