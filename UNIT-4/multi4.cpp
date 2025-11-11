#include<iostream>
using namespace std;
class employee{
    protected:
    string name;
    int id;
    public:
    void getemployee(){
        cout<<"enter employee name and id:";
        cin>>name>>id;
    }
};
class manager:public employee{
    protected:
    string dept;
    public:
    void getmanager(){
        getemployee();
        cout<<"enter department:";
        cin>>dept;
    }
};
class director:public manager{
    float salary;
    public:
    void getdirector(){
        getmanager();
        cout<<"enter salary:";
        cin>>salary;
    }
    void display(){
        cout<<"name:"<<name<<",id:"<<id<<",dept:"<<dept<<",salary:"<<salary<<endl;
    }
};
int main(){
    director d;
    d.getdirector();
    d.display();
}