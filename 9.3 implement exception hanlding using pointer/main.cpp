#include <iostream>
using namespace std;

int main() {
    int *ptr = NULL;
    int choice, value;

    cout << "Press 1 to enter a number, 0 to skip: ";
    cin >> choice;

    try {
        if (choice == 1) {
            ptr = new int;
            cout << "Enter number: ";
            cin >> value;
            *ptr = value;
        }

        if (ptr == NULL)
            throw ptr;

        cout << "Value stored using pointer: " << *ptr << endl;
        delete ptr;
    }
    catch (int*) {
        cout << "Error: Pointer is NULL (No input provided)." << endl;
    }

    return 0;
}
