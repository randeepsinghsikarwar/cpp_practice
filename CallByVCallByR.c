#include<stdio.h>

void swap(int first, int second){
        int temp = first;
        first = second;
        second = temp;
        printf("swapping using call by value\nvalues after swapping are: %d and %d.\n", first, second);
}

void swapp(int *first, int *second){
    int temp = *first;
    *first = *second;
    *second = temp;
    printf("swapping using call by reference\nvalues after swapping are: %d and %d\n", *first, *second);
}


int main(){
        printf("enter 2 numbers\n");
        int a, b;
        scanf("%d%d", &a,&b);
        printf("numbers before swapping: %d and %d\n", a, b);
        swap(a, b);
        printf("actual numbers after swapping: %d and %d\n", a, b);
        printf("numbers before swapping: %d and %d\n", a, b);
        swapp(&a, &b);
        printf("actual numbers after swapping: %d and %d\n", a, b);


}