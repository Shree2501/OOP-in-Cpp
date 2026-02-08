#include <iostream>
using namespace std;

class Shape {
public:
    virtual void draw() = 0; // Pure virtual function
};

class Circle : public Shape {
public:
    void draw() override {
        cout << "Drawing Circle\n";
    }
};

int main() {
    // Shape s;  // cannot create sn object of abstract class

    // Pointer to abstract class
    Shape* s = new Circle(); 
    s->draw();    
    
    delete s;
}