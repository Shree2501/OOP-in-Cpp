#include <iostream>
using namespace std;

int add(int a, int b);
double add(double a, double b);

int add(int a, int b){
    return a+b;
}
double add(double a, double b){
    return a+b;
}

int main(){
    int sum1 = add(2, 3);
    cout<<"Integer sum: "<<sum1<<endl;
    double sum2 = add(2.3, 4.5);
    cout<<"Double sum: "<<sum2;
    return 0;
}

