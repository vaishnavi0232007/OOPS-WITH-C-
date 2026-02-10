#include <iostream>
#include <string>
using namespace std;

int main() {
    string name;

    cout << "Enter your name: ";
    cin >> name;

    try {
        if (name.length() < 3)
            throw name;

        cout << "Valid Name: " << name << endl;
    }
    catch (string) {
        cout << "Error: Name is too short." << endl;
    }

    return 0;
}
