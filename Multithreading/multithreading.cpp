#include <iostream>
#include <thread>
using namespace std;

void display() {
    cout << "Thread is running\n";
}

int main() {
    thread t(display);
    t.join();   // wait for thread to finish
    return 0;
}