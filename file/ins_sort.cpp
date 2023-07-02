// #include<iostream>
// using namespace std;

// void insort(int *p, int len){
//     for(int i = 1;i<len;i++){
//         int key = p[i];
//         for(int j = 0;j<i;j++){
//             if(p[j]>key){
//                 int temp = p[j];
//                 p[j] = p[i];
//                 p[i] = temp;
//             }
//         }
//     }
// }


// int main(){
//     int arr[] = {5,2,4,6,1,3};
//     int len = sizeof(arr)/sizeof(arr[0]);
//     insort(arr, len);
//     for(int i = 0;i<len;i++){
//         cout<<arr[i]<<" ";
//     }
// }


#include<iostream>
using namespace std;

void inSort(int *p, int len){
    for(int i = 1;i<len;i++){
       int j = i;
       while(j>=0){
        if(p[i]<p[j]){
            int temp = p[i];
            p[i] = p[j];
            p[j] = temp;
        }
        j--;
       }
    }
}

int main(){
    int arr[] = {3,2,4,1,5,0,12};
    int len = sizeof(arr)/sizeof(arr[0]);
    inSort(arr, len);
    for(int i = 0;i<len;i++){
        cout<<arr[i]<<" ";
    }
}