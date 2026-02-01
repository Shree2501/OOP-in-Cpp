#include <iostream>
#include <string>
using namespace std;
class Student {
    public:
        ~Student() {
            cout << "Student object destroyed";
        }
    };
int main() {
    {
        Student s1;  // Student object created
    }                // s1 goes out of scope here, destructor is called
    return 0;
}    