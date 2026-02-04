#include <iostream>
using namespace std;

class Person {
public:
    void identity() {
        cout << "I am a person\n";
    }
};

class Employee : public Person {
public:
    void salary() {
        cout << "I earn salary\n";
    }
};

class Manager : public Employee {
public:
    void role() {
        cout << "I manage a team\n";
    }
};

int main() {
    Manager m;
    m.identity();
    m.salary();
    m.role();
    return 0;
}
