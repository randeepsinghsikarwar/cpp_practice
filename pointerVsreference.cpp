#include<iostream>
using namespace std;

struct A{
    int a;
    float b;
};

int main(){
    struct A a1;
    a1.a = 12;
    a1.b = 12.3f;
    struct A &a2 = a1;
    cout<<"values using reference variable: "<<endl;
    cout<<a2.a<<" "<<a2.b<<endl;

    cout<<sizeof(a2);
}