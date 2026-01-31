#include <iostream>
#include <string>
using namespace std;
class Student{
    public:
        int roll;
        string name;
        //Default Constructor
        Student(){
            roll = 01;
            name = "Shree";
        }
        void display() {
            cout << "Roll No. : "<< roll<< endl<< "Name : "<< name;
        }
    };

int main() {
    Student student1;
    student1.display();
    return 0;
}