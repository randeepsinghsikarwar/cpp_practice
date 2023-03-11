#include<bits/stdc++.h>
using namespace std;

string prime(int a){
    for(int i = 2;i<a;i++){
        if(a%i==0)
        return("not a prime");
    }
    return("it is a prime number");
}



int main(){
    int a;
    cout<<"enter a number"<<endl;
    cin>>a;
    cout<<prime(a)<<endl;
    int b;
}