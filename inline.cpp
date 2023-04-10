#include<iostream>
using namespace std;

inline int addInline(int x, int y){
    return x+y;
}

int nonInline(int x, int y){
    return x+y;
}

int main(){

        cout<<"without inline function: "<<endl<<nonInline(2,4)<<endl;
        cout<<"inline function: "<<endl<<addInline(3,5)<<endl;
}