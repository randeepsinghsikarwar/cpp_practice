#include<stdio.h>
int main(){
    int a = 10;
    int *p = &a;
    printf("%d\n", *p);
    printf("address of the variable is: %x\n", p);
    int **ptr = &p;

    printf("address of the pointer is: %x\n", ptr);
    printf("printing value using double pointers: %d\n",*(*ptr) );

}