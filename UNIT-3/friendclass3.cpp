#include<iostream>
using namespace std;
class student{
    private:
    string name;
    int rollnumber;
    double marks;
    public:
    student(string n,int r,double m):name(n),rollnumber(r),marks(m){}
    friend class studentrecord;
};
class studentrecord{
    public:
    void displaystudentinfo(const student& student){
        cout<<"name:"<<student.name<<endl;
        cout<<"rollnumber:"<<student.rollnumber<<endl;
        cout<<"marks:"<<student.marks<<endl;
    }
    void updatestudentmarks(student& student,double newmarks){
        student.marks=newmarks;
    }
};
int main(){
    student student("john doe",123,85.5);
    studentrecord record;
    cout<<"initial student info:"<<endl;
    record.displaystudentinfo(student);
    record.updatestudentmarks(student,90.0);
    cout<<"\nupdated student info:"<<endl;
    record.displaystudentinfo(student);
    return 0;
}