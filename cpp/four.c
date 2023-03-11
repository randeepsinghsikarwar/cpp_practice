#include<stdio.h>
#include<string.h>

void check(int n){
    int sum = 0;
    char str[] = "YES";
    char str2[] = "NO";
    for(int i = 1;i<n;i++){
        if(n%i==0)
        sum = sum+i;
    }
    if(sum == n)
    printf("%s", str);

    else
    printf("%s", str2);
}

int main(){
    int n;
    printf("enter a number\n");
    scanf("%d", &n);
    check(n);
}