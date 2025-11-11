#include<iostream>
using namespace std;
class banktransaction{
    string accountholder;
    double amount;
    public:
    banktransaction(string name,double amt){
        accountholder=name;
        amount=amt;
        cout<<"transaction started for"<<accountholder
            <<",with amount:"<<amount<<endl;
    }
    ~banktransaction(){
        cout<<"transaction completed for"<<accountholder
            <<",amount:"<<amount<<"processed."<<endl;
    }
};
int main(){
    cout<<"bank transaction system\n";
    banktransaction t1("navatha reddy",10000);
    banktransaction t2("navya",50000);
    cout<<"end of program.\n";
    return 0;
}