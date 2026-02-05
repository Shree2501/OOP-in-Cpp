#include <iostream>
using namespace std;

class Animal{
    public:
    virtual void sound()
    {
        cout<<"Animal makes sound";
    }
};
class Dog : public Animal{
    public:
    void sound() override{
        cout<<"dog barks";
    }
};

int main()
{
    Animal *a;
    Dog d;
    a=&d;
    a->sound();
    return 0;
}