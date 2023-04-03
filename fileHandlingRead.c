#include<stdio.h>
int main(){
    FILE *f;
    f = fopen("student.txt", "r");
    while(1){
        char ch = fgetc(f);
        if(ch == '\n')
        break;

        else
        printf("%c", ch);
    }
}