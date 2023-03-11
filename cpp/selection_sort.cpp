#include<iostream>
using namespace std;

void selection_sort(int *p, int len){
    int start = 0;
    while(start<len){
    int min = p[start];
    for(int i = start;i<len;i++){
        if(p[i]<min){
            int temp = p[i];
            p[i] = p[start];
            p[start] = temp;
        }
    }
    start++;
    }
}

int main(){
    int arr[] = {4,3,5,2,6,1};
    int len = sizeof(arr)/sizeof(arr[0]);
    selection_sort(arr, len);
    for(int i = 0;i<len;i++){
        cout<<arr[i]<<" ";
    }
}