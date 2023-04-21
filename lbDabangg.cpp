#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int i = 1;
    while(i<=n){
        int t1 = 1;
        while(t1<=n-i+1){
            cout<<t1;
            t1++;
        }
        int stars = i*2-2;
        while(stars){
            cout<<"*";
            stars --;
        }
        int t2 = n-i+1;
        while(t2>0){
            cout<<t2;
            t2--;
        }
        cout<<endl;
        i++;
    }
}