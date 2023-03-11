#include<stdio.h>

int main(){
    int n;
    int sum = 0;
    printf("enter a number\n");
    scanf("%d", &n);
    while(n!=0){
        int r = n%10;
        sum = sum+r;
        n = n/10;
    }
    printf("%d", sum);
}