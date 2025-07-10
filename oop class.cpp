#include<iostream>
#include<string>
using namespace std;

class BankAccount{
    string accountHolder;
    float balance;
public:
    BankAccount(string name, float initialBalance){
        accountHolder = name;
        balance = initialBalance;
    }

    ~BankAccount(){
        cout << "account" << accountHolder << "closed" << endl;
    }
    void setBalance (float money){
        if(money>0){
            balance+=money;
        }
        cout<<"money"<<money<<endl;
    }
    void display(){
        cout<<"Account Holder"<<accountHolder<<endl;
        cout<<"Balance"<<balance<<endl;
    }
};

int main(){
    BankAccount account1 ("Alice", 1000);
    account1.setBalance(500);
    account1.display();
}
