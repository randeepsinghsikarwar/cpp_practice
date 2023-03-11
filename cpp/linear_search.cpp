#include<iostream>
using namespace std;
int linear_search(int *p, int size, int key){
    for(int i = 0;i<size;i++){
        if(p[i]==key)
        return i;
    }
    return -1;
}
int main(){
    int arr[] = {1,2,4,6,12};
    int size = sizeof(arr)/sizeof(arr[0]);
    int key;
    cin>>key;
    cout<<linear_search(arr, size, key);
}