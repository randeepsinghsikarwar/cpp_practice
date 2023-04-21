#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int i = 1;
    // while(i<=n){
    //     int spaces = i-1;
    //     while(spaces){
    //         cout<<" ";
    //         spaces--;
    //     }
    //     int nums = n-i+1;
    //     while(nums){
    //         cout<<i;
    //         nums --;
    //     }
    //     cout<<endl;
    //     i++;
    // }

    while(i<=n){
        int spaces = n-i;
        while(spaces){
            cout<<" ";
            spaces --;
        }
        int nums = i;
        while(nums){
            cout<<i;
            nums --;
        }
        cout<<endl;
        i++;
    }
}