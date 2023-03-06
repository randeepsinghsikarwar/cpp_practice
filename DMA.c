#include<stdio.h>
#include<stdlib.h>
void Malloc(){
    int size;
    printf("creating array using malloc()\n");
    printf("enter size of array\n");
    scanf("%d", &size);
    int *p = (int*) malloc(size*sizeof(int));
    printf("enter valus of array\n");
    for(int i = 0;i<size;i++){
            scanf("%d", &p[i]);
    }
    printf("valus of array are:\n");
    for(int i = 0;i<size;i++){
            printf("%d ", p[i]);
    }
    free(p);
    printf("\nmemory freed!\n");
}
void Calloc(){
    int size;
    printf("creating an array using calloc()\n");
    printf("enter size of array\n");
    scanf("%d", &size);
    int *p = (int*) calloc(size, sizeof(int));
    printf("enter valus of array\n");
    for(int i = 0;i<size;i++){
            scanf("%d", &p[i]);
    }
    printf("valus of array are:\n");
    for(int i = 0;i<size;i++){
            printf("%d ", p[i]);
    }
    free(p);
    printf("\nmemory freed!\n");
}
void Realloc(){
    int size;
    printf("creating an array using calloc()\n");
    printf("enter size of array\n");
    scanf("%d", &size);
    int *p = (int*) calloc(size, sizeof(int));
    printf("enter valus of array\n");
    for(int i = 0;i<size;i++){
            scanf("%d", &p[i]);
    }
    printf("valus of array are:\n");
    for(int i = 0;i<size;i++){
            printf("%d ", p[i]);
    }
    printf("\narray using realloc\n");
    
    int  *newP = (int*)realloc(p, 2*sizeof(int));
    for(int i = 0;i<2;i++){
            printf("%d ", newP[i]);
        
    }
        free(p);
        free(newP);
    printf("\nmemory freed!\n");
}

int main(){
    Malloc();
    Calloc();
    Realloc();
}