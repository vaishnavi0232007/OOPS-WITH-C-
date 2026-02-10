#include <iostream>
using namespace std;

class User {
protected:
    string name;

public:
    void setUser(string n) {
        name = n;
    }
};

class Student : public User {
protected:
    int rollNo;

public:
    void setStudent(int r) {
        rollNo = r;
    }
};

class Result : public Student {
public:
    void setResult(int m) {
        cout << "Name: " << name << endl;
        cout << "Roll No: " << rollNo << endl;
        cout << "Marks: " << m << endl;
    }
};

int main() {
    Result r;
    r.setUser("Amit");
    r.setStudent(12);
    r.setResult(85);
 return 0; }
