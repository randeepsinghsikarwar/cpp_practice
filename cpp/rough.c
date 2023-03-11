#include<stdio.h>
#include<string.h>

// int main(){
//     char a = 'A';
//     char str[] = "\nhello";
//     printf("%c%s", a, str);
// }

int main(){
    int a = 3, b;
    b = ++a + ++a + ++a;
    printf("%d%d", a, b);
    
}