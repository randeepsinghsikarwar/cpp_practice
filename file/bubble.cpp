#include<iostream>
using namespace std;

void bsort(int *p, int l, int h){
    int size = h;
    while(size>l){

        for(int i = 0;i<size-1;i++){
            if(p[i]>p[i+1]){
                int temp = p[i];
                p[i] = p[i+1];
                p[i+1] = temp;
            }
        }
        size--;
    }
}

int main(){
    int arr[] = {5,15,10,2,4,6,9};
    int len = sizeof(arr)/sizeof(arr[0]);

    bsort(arr, 0, len);
    for(int i = 0;i<len;i++){
        cout<<arr[i]<<" ";
    }
    
}