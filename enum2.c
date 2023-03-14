#include<stdio.h>
int main(){

    enum Month {jan, feb, march, april, may, june};

typedef enum Month m;

    m mm = feb;
    printf("%d", sizeof(mm));
    printf("\n%d", mm);


}