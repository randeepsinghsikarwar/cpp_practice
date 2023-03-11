#include<stdio.h>
int main(){
    int *arr[4];
    int marks[4] = {10, 20, 30, 40};
    for(int i = 0;i<4;i++){
        arr[i] = marks+i;
    }

    for(int i = 0;i<4;i++){
        printf("%d ", *arr[i]);
    }
    

}