#include <iostream>
using namespace std;

class A {
private:
    int x;
public:
    A() {
        x = 10;
    }
    friend class B;
};

class B {
public:
    void show(A obj) {
        cout << "Value of x: " << obj.x;
    }
};

int main(){
    A aa;
    B bb;
    bb.show(aa);
    return 0;
}