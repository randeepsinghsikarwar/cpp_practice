#include<stdio.h>
#include<stdlib.h>

int main(){
    printf("reverse the array of 1. number 2. char?");
    int choice;
    scanf("%d", &choice);
    switch(choice){
        case 1:
        printf("enter size of the int array\n");
        int n;
        scanf("%d", &n);
        int *p = (int*)malloc(n*sizeof(int));
        for(int i = 0;i<n;i++){
            scanf("%d", &p[i]);
        }
        printf("array in reverse order is:\n");
        for(int i = n-1;i>=0;i--){
            printf("%d ", p[i]);
        }
        break;

        case 2:
        printf("enter size of the char array\n");
        int N;
        scanf("%d", &N);
        printf("aas");
        char *d = (char*)malloc(N*sizeof(char));
        for(int i = 0;i<N;i++){
            scanf("%c", &d[i]);
            printf("%c", d[i]);
        }
        break;
    } 

}