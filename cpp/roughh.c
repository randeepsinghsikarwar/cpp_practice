#include<stdio.h>
#include<stdlib.h>

int main(){
    // int a = 5;
    // float b = 10;
    // void *p = &a;
    // printf("%d\n", *(int*)p);
    
    // p = &b;
    // printf("%f",*(float *)p);

    int * p = (int *)malloc(4*sizeof(int));
    free(p);
    // p = NULL;
    printf("%x", p);

}