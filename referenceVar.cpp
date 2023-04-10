#include<iostream>
using namespace std;

void nonReference(int a){
    cout<<"var with non reference variable: "<<a<<endl;
}

void Reference(int &a){
    cout<<"var with reference variable: "<<a<<endl;
}


int main(){
    int nonreference = 10;
    int &reference = nonreference;
    nonReference(nonreference);
    Reference(reference);
}