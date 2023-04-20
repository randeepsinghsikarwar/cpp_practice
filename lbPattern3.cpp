#include<iostream>
using namespace std;
int main(){
    int m;
    cin>>m;
    int i = 1, count = 1;

    while(i<=m){
        int  j = 1;
        while(j<=m){
            cout<<count;
            count++;
            j++;
        }
        cout<<endl;
        i++;
    }
}