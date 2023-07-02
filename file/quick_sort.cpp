#include<iostream>
using namespace std;

int partition(int *p ,int low, int high){
        int pivot = p[low];
        int i = low, j = high;

        while(i<j){
            do{
            i++;
        }while(p[i]<=pivot);

        while(p[j]>pivot){
            j--;
        }

        if(i<j){
            int temp = p[i];
            p[i] = p[j];
            p[j] = temp;
        }
        int temp = p[low];
        p[low] = p[j];
        p[j] = temp;
        return j;
        }
}

void qs(int *p ,int low, int high){
    if(low<high){
        int par = partition(p ,low, high);
        qs(p, low, par);
        qs(p, par+1, high);
    }
}

int main(){
    int arr[] = {3,2,4,1,5,7};
    int len = sizeof(arr)/sizeof(arr[0]);
    qs(arr, 0, len);

    for(int i = 0;i<len;i++){
        cout<<arr[i]<<" ";
    }

}