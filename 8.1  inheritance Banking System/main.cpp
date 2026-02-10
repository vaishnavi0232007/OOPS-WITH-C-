#include <iostream>
using namespace std;

class Account {
protected:
    int accNo;
    float balance;

public:
    void setAccount(int a, float b) {
        accNo = a;
        balance = b;
    }

    void showAccount() {
        cout << "Account No: " << accNo << endl;
        cout << "Balance: " << balance << endl;
    }
};

class SavingsAccount : public Account {
public:
    void calculateInterest() {
        float interest = balance * 0.05;
        cout << "Interest: " << interest << endl;
    }
};
int main() {
    SavingsAccount s;
    s.setAccount(101, 10000);
    s.showAccount();
    s.calculateInterest();
 return 0; }
