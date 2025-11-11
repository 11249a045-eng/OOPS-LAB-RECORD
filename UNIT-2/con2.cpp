#include<iostream>
using namespace std;
class bankaccount{
    private:
    string name;
    int accountnumber;
    double balance;
    public:
    bankaccount(){
        name="unknown";
        accountnumber=0;
        balance=0.0;
    }
    bankaccount(string n,int accno,double bal)
    {
        name=n;
        accountnumber=accno;
        balance=bal;
    }
    bankaccount(const bankaccount &acc){
        name=acc.name;
        accountnumber=acc.accountnumber;
        balance=acc.balance;
    }
    void display(){
        cout<<"name:"<<name
            <<",accountno:"<<accountnumber
            <<",balance:"<<balance<<endl;
    }
};
int main(){
    bankaccount a1;
    bankaccount a2("navatha",12345,50000.0);
    bankaccount a3(a2);
    a1.display();
    a2.display();
    a3.display();
    return 0;
}