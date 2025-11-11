#include<iostream>
using namespace std;
class person{
    protected:
    string name;
    int age;
    public:
    void getdata(){
        cout<<"enter name and age:";
        cin>>name>>age;
    }
    void display(){
        cout<<"name:"<<name<<",age:"<<age<<endl;
    }
};
class teacher:public person{
    string subject;
    float salary;
    public:
    void getteacherdata(){
        getdata();
        cout<<"enter subject and salary:";
        cin>>subject>>salary;
    }
    void displayteacher(){
        display();
        cout<<"subject:"<<subject<<",salary:"<<salary<<endl;
    }
};
int main(){
    teacher t;
    t.getteacherdata();
    t.displayteacher();
    return 0;
}