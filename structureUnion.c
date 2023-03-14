#include<stdio.h>

union emp {
    char code;
    int salary;
};

struct empl{
    int phone[10];
    int sal;
};

int main(){
    // union emp e1;
    // printf("enter code and salary");
    // scanf("%c%d", &e1.code, &e1.salary);
    // printf("\nsalary of the employee having code %c is %d", e1.code, e1.salary);
    // printf("\n%d", sizeof(e1));
    struct empl list[1];
    printf("enter details of 1 employee\n");
    for(int i = 0;i<1;i++){
        printf("enter phone number of the employee no %d\n", i+1);
        for(int j = 0;j<10;j++){
            scanf("%d", &list[i].phone[j]);
        }
        printf("enter salary\n");
        scanf("%d", &list[i].sal);
    }
    printf("size of the structure is %d bytes", sizeof(list));
}