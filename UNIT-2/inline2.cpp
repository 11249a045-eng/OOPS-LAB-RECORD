#include<iostream>
using namespace std;
inline int add(int a,int b)
{
    return a+b;
}
int main()
{
    int x,y;
cout<<"enter two numbers:";
cin>>x>>y;
cout<<"sum of"<<x<<"and"<<y<<"is:"<<add(x,y)<<endl;
return 0;
}