#include <iostream>
#include <string>
using namespace std;

class MyString {
    string str;

public:
    MyString(string s = "") {
        str = s;
    }

    MyString operator +(MyString s) {
        MyString temp;
        temp.str = str + s.str;
        return temp;
    }

    void display() {
        cout << str << endl;
    }
};

int main() {
    MyString s1("Py");
    MyString s2("thon");

    MyString s3 = s1 + s2;   // calls operator+
    s3.display();

    return 0;
}
