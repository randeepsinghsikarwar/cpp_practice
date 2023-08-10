#include<iostream>
using namespace std;
int main(){
    int arr[] = {3,2,4,1,0,12,0,0,4,0,0};
    int count = 0;
    for(int i = 0;i<sizeof(arr)/sizeof(arr[0]);i++){
        if(arr[i] != 0){
            swap(arr[count], arr[i]);
            count++;
        }
    }
    for(int i = 0;i<sizeof(arr)/sizeof(arr[0]);i++){
        cout<<arr[i]<<" ";
    }
}