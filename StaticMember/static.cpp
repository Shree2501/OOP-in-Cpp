#include <iostream>
#include <string>
using namespace std;
class Student{
    public:
        static int studentCount; // Static member variable to keep track of student count

        Student() {
            studentCount++; // Increment count when a new Student object is created
        }

        static int getStudentCount() { // Static member function to access student count
            return studentCount;
        }
};
int Student::studentCount = 0; // Initialize static member variable
int main() {
    Student s1;
    Student s2;
    Student s3;

    cout << "Total Students: " << Student::getStudentCount() << endl; // Accessing static member function

    return 0;
}