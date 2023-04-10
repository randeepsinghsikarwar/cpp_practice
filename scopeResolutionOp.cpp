#include<iostream>
using namespace std;

class A{
    public:
    int age;


    public:
    void getAge();  //   if {} is used here, the :: wont work. error: refination of this funciton
};

void A::getAge(){
    int a;
    cout<<"enter ypur age"<<endl;
    cin>>a;
    age = a;
    cout<<age<<endl;
}

int main(){
    A a1;
    a1.getAge();
}