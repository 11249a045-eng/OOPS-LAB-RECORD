#include<iostream>
#include<string>
using namespace std;
class bankaccount{
    private:
    string accountnumber;
    double balance;
    public:
    bankaccount(string accno,double bal):accountnumber(accno),balance(bal){}
    friend void displayaccountinfo(const bankaccount&);
    void deposit(double amount){
        balance+=amount;
    }
    void withdraw(double amount){
        if(balance>=amount){
            balance-=amount;
        }else{
            cout<<"insufficient balance!"<<endl;
        }
    }
};
void displayaccountinfo(const bankaccount& account){
    cout<<"account number:"<<account.accountnumber<<endl;
    cout<<"balance:"<<account.balance<<endl;
}
int main(){
    bankaccount account("123456789",1000.0);
    cout<<"initial account info:"<<endl;
    displayaccountinfo(account);
    account.deposit(500.0);
    cout<<"\naccount info after deposit:"<<endl;
    displayaccountinfo(account);
    account.withdraw(200.0);
    cout<<"\naccount info after withdrawal:"<<endl;
    displayaccountinfo(account);
    return 0;
}