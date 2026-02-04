#include <iostream>
using namespace std;

class Account {
public:
    void bankName() {
        cout << "XYZ Bank\n";
    }
};

class SavingsAccount : public Account {
public:
    void interest() {
        cout << "Gives interest\n";
    }
};

class CurrentAccount : public Account {
public:
    void overdraft() {
        cout << "Overdraft facility\n";
    }
};

int main() {
    SavingsAccount s;
    CurrentAccount c;

    s.bankName();
    s.interest();

    c.bankName();
    c.overdraft();

    return 0;
}
