#include<iostream>
using namespace std;

class A{
    public:
    virtual void show(){
        cout<<"base"<<endl;
        
    }
};

class B: public A{
    public:
    void show(){
        cout<<"child"<<endl;
    }
};

int main(){
    A *a;
    a = new A();
    a->show();
    a = new B();
    a ->show();
}