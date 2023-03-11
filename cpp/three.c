#include<stdio.h>

int calculate(int a){
    if(a==0)
    return 0;

    else{
        int num = 1;
        int sum = num;
        for(int i = 1;i<a;i++){
            num = num*10;
            num = num+1;
            sum = sum+num;
        }
        return sum;
    }
}

int main(){
    int n;
    printf("enter a number\n");
    scanf("%d", &n);
    printf("%d", calculate(n));
}