#include<stdio.h>

void arrayHandler(int *p, int size){
    for(int i = 0;i<size;i++){
        p[i] +=1;
    }
}

int main(){
    int arr[] = {1,2,3,4,5};
    int size = sizeof(arr)/sizeof(arr[0]);
    for(int i = 0;i<size;i++){
        printf("%d ", arr[i]);
    }
    printf("\n");
    arrayHandler(arr, size);
    for(int i = 0;i<size;i++){
        printf("%d ", arr[i]);
    }

}