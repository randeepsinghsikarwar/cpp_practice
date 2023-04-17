#include<iostream>
using namespace std;
int main(){
    int num, power;
    double sol = 1;
    cin>>num>>power;
    if(power<0){
        while(power){
            sol*=num;
            power++;
        } 
        cout<<1/sol<<endl;
    }
    else{
        while(power){
            sol*=num;
            power--;
        }
        cout<<sol<<endl;
    }
}