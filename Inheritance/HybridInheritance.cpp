#include <iostream>
using namespace std;

class Person {
public:
    void info() {
        cout << "I am a person\n";
    }
};

class Student : virtual public Person {
};

class Employee : virtual public Person {
};

class Intern : public Student, public Employee {
};

int main() {
    Intern i;
    i.info();  // no ambiguity due to virtual inheritance
    return 0;
}
