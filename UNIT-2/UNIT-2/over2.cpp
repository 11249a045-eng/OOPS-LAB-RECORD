#include<iostream>
#include<string.h>
using namespace std;
class book{
    char title[50];
    float price;
    public:
    void getdata(){
        cout<<"enter book title:";
        cin>>title;
        cout<<"enter price:";
        cin>>price;
    }
    void operator=(book &b){
        strcpy(title,b.title);
        price=b.price;
    }
    void display(){
        cout<<"title:"<<title<<",price:"<<price<<endl;
    }
};
int main(){
    book b1,b2;
    b1.getdata();
    b2=b1;
    cout<<"\ncopied book details:\n";
    b2.display();
    return 0;
}