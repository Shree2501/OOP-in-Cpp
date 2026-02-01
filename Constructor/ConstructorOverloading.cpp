#include <iostream>
#include <string>
using namespace std;
class Student {
    public:
        string name;
        int age;
    
        Student() {
            name = "Unknown";
            age = 0;
        }
    
        Student(string n) {
            name = n;
            age = 0;
        }
    
        Student(string n, int a) {
            name = n;
            age = a;
        }
    };
int main() {
    Student s1;  // Default constructor 
    Student s2("Alice");  // Parameterized constructor with one argument
    Student s3("Bob", 20);  // Parameterized constructor with two arguments
    cout << "Student 1: Name = " << s1.name << ", Age = " << s1.age << endl;
    cout << "Student 2: Name = " << s2.name << ", Age = " << s2.age << endl;
    cout << "Student 3: Name = " << s3.name << ", Age = " << s3.age << endl;
    return 0;
}    