#include<iostream>
using namespace std;
class number{
    int x;
    public:
    number(int a)
    {
        x=a;
    }
    void operator-()
    {
        x=-x;
    }
    void display()
    {
        cout<<"value of x:"<<x<<endl;
    }
        };
        int main()
        {
            number n1(10);
            cout<<"before overloading:"<<endl;
            n1.display();
            -n1;
            cout<<"after overloading:"<<endl;
            n1.display();
            return 0;
        }
    
