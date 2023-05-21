#include<iostream>

using namespace std;

int findLargest(int *p, int size){
    int largest = 0;
    for(int i = 0;i<size;i++){
        if(p[i] > largest){
            largest = p[i];
        }
    }
    return largest;
}

int main(){
    // int arr[] = {10,20,1,23,200,40,13,15,0};
    int arr[] = {10,10, 10, 10, 10};
    int size = sizeof(arr)/sizeof(arr[0]);
    int largest = findLargest(arr, size);
    int i = 0, second_largest = 0;
    for(i = 0;i<size;i++){        
        if(arr[i]<largest){
            if(arr[second_largest] < arr[i]){
                second_largest = i;
            }
        }
    }
    cout<<arr[second_largest]<<endl;
}