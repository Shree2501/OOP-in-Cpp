#include <iostream>
#include <string>
using namespace std;
class Account {
    private:
        double balance;
    
    public:
        void setBalance(double b) {
             balance = b; 
        }
        double getBalance() { 
            return balance; 
        }
};
    
int main() {
    Account myAccount;
    myAccount.setBalance(1500.75);
    cout << "Account Balance: " << myAccount.getBalance() << endl;
    return 0;
}