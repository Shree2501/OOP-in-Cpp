#include <iostream>
#include <string>
using namespace std;
class Student{
    public:
        int roll;
        string name;
        //Default Constructor
        Student(int r, string n){
            roll = r;
            name = n;
        }
        void display() {
            cout << "Roll No. : "<< roll<< endl<< "Name : "<< name;
        }
    };

int main() {
    Student s1(101, "Shree");
    s1.display();
    return 0;
}