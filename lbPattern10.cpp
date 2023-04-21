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
            spaces--;
        }
        int j = 1;
        while(j<=i){
            cout<<j;
            j++;
        }
        int num2 = i-1;
        while(num2){
            cout<<num2;
            num2--;
        }
        cout<<endl;
        i++;
    }
}