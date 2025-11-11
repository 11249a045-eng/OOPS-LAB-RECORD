#include<iostream>
using namespace std;
class math{
    public:
    int add(int a,int b)
    {
        return a+b;
    }
    double add(double a,double b)
    {
        return a+b;
    }
};
int main()
{
    math m;
    cout<<"sum of 2 int:"<<m.add(5,10)
        <<",sum of 2 double:"<<m.add(2.5,3.7)<<endl;
        return 0;
}