#include<stdio.h>
#include<stdlib.h>

int sumUsingMalloc(int n){
    int sum = 0;
    int *p = (int*)malloc(n*sizeof(int));
    printf("enter elements for malloc\n");
    for(int i = 0;i<n;i++){
        scanf("%d", &p[i]);
        sum+=p[i];
    }
    free(p);
    printf("malloc memory is free now!\n");
    return sum;
}

int sumUsingCalloc(int n){
    int sum = 0;
    int *p = (int*)calloc(n, sizeof(int));
        printf("enter elements for calloc\n");

    for(int i = 0;i<n;i++){
        scanf("%d", &p[i]);
        sum+=p[i];
    }
    free(p);
    printf("calloc memory is free now!\n");
    return sum;
}

int main(){
    int n;
    printf("enter size of the array\n");
    scanf("%d", &n);  
    printf("which method you wish to use for DMA? 1. Malloc 2. Calloc\n");  
    int choice;
    scanf("%d", &choice);
    switch(choice){
        case 1:
            printf("the sum is %d\n", sumUsingMalloc(n));
            break;
        case 2:
        printf("the sum is %d\n", sumUsingCalloc(n));
        break;

        default:
        printf("invalid input");
        
    }

}