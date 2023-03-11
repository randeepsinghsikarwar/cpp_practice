#include<iostream>
using namespace std;

void insort(int *p, int len){
    for(int i = 1;i<len;i++){
        int key = p[i];
        for(int j = 0;j<i;j++){
            if(p[j]>key){
                int temp = p[j];
                p[j] = p[i];
                p[i] = temp;
            }
        }
    }
}

int main(){
    int arr[] = {4,3,2,1};
    int len = sizeof(arr)/sizeof(arr[0]);
    insort(arr, len);
    for(int i = 0;i<len;i++){
        cout<<arr[i]<<" ";
    }
}