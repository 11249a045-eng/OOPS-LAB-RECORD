#include<iostream>
using namespace std;
class car{
    private:
    string brand;
    string model;
    float price;
    public:
    car(){
        brand="unknown";
        model="N/A";
        price=0.0;
    }
    car(string b,string m,float p){
        brand=b;
        model=m;
        price=p;
    }
    car(const car &c){
        brand=c.brand;
        model=c.model;
        price=c.price;
    }
    void display(){
        cout<<"brand:"<<brand
            <<",model:"<<model
            <<",price:"<<price<<endl;
    }
};
int main(){
    car c1;
    car c2("Hyundai","i20",850000.0);
    car c3(c2);
    c1.display();
    c2.display();
    c3.display();
    return 0;
}