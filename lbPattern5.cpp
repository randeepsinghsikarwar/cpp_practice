#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int i = 1;
    // while(i<=n){
    //     int j = 1;
    //     while(j<=i){
    //         cout<<i;
    //         j++;
    //     }
    //     cout<<endl;
    //     i++;
    // }


    // int count = 1;
    // while(i<=n){
    //     int j = 1;
    //     while(j<=i){
    //         cout<<count;
    //         count++;
    //         j++;
    //     }
    //     cout<<endl;
    //     i++;
    // }

    // while(i<=n){
    //     int count = i, j = 1;
    //     while(j<=i){
    //         cout<<count;
    //         count++;
    //         j++;
    //     }
    //     cout<<endl;
    //     i++;
    // }

    // while(i<=n){
    //     int j = 0;
    //     while(j<i){
    //         cout<<i+j;
    //         j++;
    //     }
    //     cout<<endl;
    //     i++;
    // }

    while(i<=n){
        int j = i;
        while(j>0){
            cout<<j;
            j--;
        }
        cout<<endl;
        i++;
    }
}
