#include<iostream>
using namespace std;
class book{
    private:
    string title;
    string author;
    float price;
    public:
    book(){
        title="untitled";
        author="unknown";
        price=0.0;
    }
    book(string t,string a,float p){
        title=t;
        author=a;
        price=p;
    }
    book(const book &b){
        title=b.title;
        author=b.author;
        price=b.price;
    }
    void display(){
        cout<<"title:"<<title
            <<",author:"<<author
            <<",price:"<<price<<endl;
    }
};
int main(){
    book b1;
    book b2("c++ programming","bjarne stroustrup",750.0);
    book b3(b2);
    b1.display();
    b2.display();
    b3.display();
    return 0;
}