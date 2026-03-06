#include <iostream>
#include <exception>
using namespace std;

class MyException {
};

int main() {
    try {
        throw MyException();
    }
    catch(MyException e) {
        cout << "Custom Exception Caught";
    }

    return 0;
}