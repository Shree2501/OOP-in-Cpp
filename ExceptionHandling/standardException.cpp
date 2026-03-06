#include <iostream>
using namespace std;

int main() {
    try {
        throw runtime_error("Runtime Error Occurred");
    }
    catch(runtime_error &e) {
        cout << e.what();
    }
}