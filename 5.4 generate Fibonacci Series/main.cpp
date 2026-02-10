#include <iostream>
using namespace std;

class Fibonacci {
    int n;

public:
    Fibonacci(int x) {
        n = x;
    }

    void generate() {
        int a = 0, b = 1, c;
        cout << "Fibonacci Series: ";

        for (int i = 1; i <= n; i++) {
            cout << a << " ";
            c = a + b;
            a = b;
            b = c;
        }
    }
};
int main() {
Fibonacci f(10);
f.generate();
return 0;
}
