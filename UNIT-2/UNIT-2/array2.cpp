#include<iostream>
using namespace std;
class employee{
    int id;
    char name[20];
    public:
    void getdata()
    {
        cout<<"enter id and name:";
        cin>>id>>name;
    }
    void display()
    {
        cout<<"id:"<<id<<"name:"<<name<<endl;
    }
};
int main()
{
    employee e[3];
    for(int i=0;i<3;i++)
    {
        e[i].getdata();
    }
    cout<<"\n employee details:";
    for(int i=0;i<3;i++)
    {
        e[i].display();
    }
    return 0;
}