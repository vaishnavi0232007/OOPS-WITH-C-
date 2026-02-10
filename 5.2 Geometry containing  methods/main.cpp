#include <iostream>
using namespace std;

class Geometry {
public:
    // Area of circle
    double area(double r) {
        return 3.14 * r * r;
    }

    // Area of rectangle
    int area(int l, int b) {
        return l * b;
    }

    // Area of triangle
    double area(double base, double height) {
        return 0.5 * base * height;
    }

    // Volume of cube
    int volume(int side) {
        return side * side * side;
    }

    // Volume of cuboid
    int volume(int l, int b, int h) {
        return l * b * h;
    }
};

int main() {
    Geometry g;

    cout << "Area of Circle: " << g.area(5.0) << endl;
    cout << "Area of Rectangle: " << g.area(4, 6) << endl;
    cout << "Area of Triangle: " << g.area(5.0, 3.0) << endl;

    cout << "Volume of Cube: " << g.volume(3) << endl;
    cout << "Volume of Cuboid: " << g.volume(4, 5, 6) << endl;

    return 0;
}
