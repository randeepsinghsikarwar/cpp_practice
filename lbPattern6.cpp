#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int i = 0;
    while(i<n){
        char c = 'A';
        c = c+i;
        int j = 1;
        while(j<=n){
            cout<<c;
            j++;
        }
        cout<<endl;
        i++;
    }
}