#include <iostream>
using namespace std;
class add1 
{
    protected:
    int a;
    public:
    void getData1(){
        cout<<"Enter a number: ";
        cin>>a;
    }
};
class add2 
{
    protected:
    int b;
    public:
    void getData2(){
        cout<<"Enter a number: ";
        cin>>b;
    }
};
class add : public add1, public add2
{
    public:
    void display(){
        cout<<"Sum = "<<a + b;
    }
};

int main()
{
    add aa;
    aa.getData1();
    aa.getData2();
    aa.display();
}


