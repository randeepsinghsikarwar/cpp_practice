#include<stdio.h>
#include<stdlib.h>


struct student {
    char id;
    int marks;
};

typedef struct student std;


void printDetails(std *p){
        // for(int i = 0;i<num;i++){
        //     printf("details of student %d\n %c\n%d\n",i, p[i].id, p[i].marks);
        // }
            printf("details of student %c\n%d\n", p[0].id, p[0].marks);

        
}

int main(){


// printf("please enter number of studnets\n");
// int num;
// scanf("%d", &num);
    std *s = (std*) calloc(1 , sizeof(std));
    // for(int i = 0;i<num;i++){
    //     printf("enter details of %d student, first character id, then marks\n", i+1);
    //     scanf("%c%d", &s[i].id, &s[i].marks);
    // }
    s[0].id = 'a';
    s[0].marks = 1;
    printDetails(s);
    
}