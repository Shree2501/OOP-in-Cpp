#include <iostream>
#include <string>
using namespace std;
class Student{
    public:
        int roll;
        string name;
    
        void display() {
            cout << "Roll No. : "<< roll<< endl<< "Name : "<< name;
        }
    };

int main() {
    Student student1;
    student1.roll = 101;
    student1.name = "Alice";
    student1.display();
    return 0;
}