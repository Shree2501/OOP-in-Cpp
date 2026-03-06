#include <iostream>
#include <string>
using namespace std;
int main(){
    int a,b,res;
    cout<<"Enter the value of a and b: ";
    cin>>a>>b;
    try{
        if(b == 0)
        throw(0);
        res = a/b;
        cout<<res<<endl;
    }
    catch(int e){
        cout<<"Error: Cannot divide by "<<e;
    }
    return 0;
}