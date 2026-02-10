#include <iostream>
using namespace std;

class Salary {
protected:
    float basicSalary;
};

class Attendance {
protected:
    int daysPresent;
};

class Employee : public Salary, public Attendance {
public:
    void setData(float s, int d) {
        basicSalary = s;
        daysPresent = d;
    }

    void showData() {
        cout << "Salary: " << basicSalary << endl;
        cout << "Days Present: " << daysPresent << endl;
    }
};

int main() {
    Employee e;
    e.setData(30000, 26);
    e.showData();
 return 0; }
