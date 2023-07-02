#include<iostream>
using namespace std;
int main(){
    int arr[] = {3,2,5,1,7,12};
    int largest = 0, second = -1;
    for(int i = 0;i<sizeof(arr)/sizeof(arr[0]);i++){
        if(arr[i] > arr[largest]){
            second = largest;
            largest = i;
        }
        else{
                if(second==-1){
                    second = i;
                }
                else{
                    if(arr[i]>arr[second]){
                        second = i;
                    }
                }
        }
    }
    cout<<second<<endl;
}