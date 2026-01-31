#include <iostream>
#include <string>
using namespace std;
class Student{
    public:
        int roll;
        string name;
        Student(int r, string n){
            roll = r;
            name = n;
        }
        // copy constructor
        Student(const Student &s) {  
            name = s.name;
            roll = s.roll;
        }
        void display() {
            cout << "Roll No. : "<< roll<< endl<< "Name : "<< name;
        }
    };

int main() {
    Student s1(101, "Shree");
    Student s2 = s1;  // Copy constructor called
    s2.display();
    return 0;
}