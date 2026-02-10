#include <iostream>
using namespace std;

class StaticDemo {
    static int count;

public:
    StaticDemo() {
        count++;
    }

    static void showCount() {
        cout << "Object Count: " << count << endl;
    }
};

int StaticDemo::count = 0;

int main() {
    StaticDemo s1, s2, s3;
    StaticDemo::showCount();
    return 0;
}
