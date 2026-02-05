#include <iostream>
using namespace std;
class PaymentMode{
    public:
    virtual void makePayment()
    {
        cout<<"The Payment is processing..."<<endl;
    }
};

class CreditCard : public PaymentMode
{
    public:
    void makePayment() override{
        cout<<"Payment is made through Credit Card"<<endl;
    }
};

class DebitCard : public PaymentMode
{
    public:
    void makePayment() override{
        cout<<"Payment is made through Debit Card"<<endl;
    }
};

class UPI : public PaymentMode
{
    public:
    void makePayment() override{
        cout<<"Payment is made through UPI";
    }
};

int main()
{
    PaymentMode *p;
    int ch;
    cout<<"Select payment mode : 1.CreditCard 2.DebitCard 3.UPI : ";
    cin>>ch;
    if (ch==1){
        CreditCard cc;
        p=&cc;
        p->makePayment();
    }
    else if (ch==2){
        DebitCard dc;
        p=&dc;
        p->makePayment();
    }
    else{
        UPI u;
        p=&u;
        p->makePayment();
    }
 
    return 0;
}
