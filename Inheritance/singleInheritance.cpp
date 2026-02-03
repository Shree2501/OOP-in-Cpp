#include <iostream>
using namespace std;
class addition
{
    public:
    int a;
    void getData1(){
        cout<<"Enter value of a: ";
        cin>>a;
    }
    int b;
    void getData2(){
        cout<<"Enter value of b: ";
        cin>>b;
    }
};
class add : public addition
{
    public:
    void showdata()
    {
        cout<<"Sum = "<<a+b;
    }
};
int main()
{
    add aa;
    aa.getData1();
    aa.getData2();
    aa.showdata();
}
