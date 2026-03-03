#include <iostream>
using namespace std;
class Student
{
    string name;
    int age;
    public:
    void setStudent(int age, string name)
    {
        this -> age = age;
        this -> name = name;
    }
    void printStudent()
    {
        cout << "Student " << this -> name << ", age = " << this -> age << endl;
    }
};
int main()
{
    Student *sptr = new Student();
    sptr -> setStudent(20, "Amit");
    sptr -> printStudent();
    delete sptr;
    return 0;
}