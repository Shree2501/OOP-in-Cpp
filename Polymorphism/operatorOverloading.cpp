#include <iostream>
using namespace std;

class Complex
{
  private:
    int real;
    int imaginary;

  public:
    Complex(int r, int i)
    {
        real = r;
        imaginary = i;
    }
    void print()
    {
        cout << real << " + i" << imaginary;
    }
    Complex operator+(Complex c)
    {
        Complex cc(0, 0);
        cc.real = real + c.real;
        cc.imaginary = imaginary + c.imaginary;
        return cc;
    }
};
int main()
{
    Complex c1(3, 5);
    Complex c2(2, 4);
    Complex c3 = c1 + c2;
    c3.print();
    return 0;
}