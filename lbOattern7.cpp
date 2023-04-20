#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int i = 1;
    while(i<=n){
        int spaces = n-i;
        while(spaces){
            cout<<" ";
            spaces --;

        }
        int stars = i;
        while(stars){
            cout<<"*";
            stars --;
        }
        cout<<endl;
        i++;
    }
}