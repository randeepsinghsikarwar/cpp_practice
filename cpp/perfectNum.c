#include <stdio.h>
int main()
{
    int a, sum = 0;
    // printf("enter the number\n");
    // scanf("%d", &a);
    a = 6;
    printf("%d", a);
    for (int i = 1; i < a; i++)
    {
        if(a%i==0)
        sum = sum + i;
    }
    if(sum == a)
    printf("YES");

    else
    printf("NO");
}