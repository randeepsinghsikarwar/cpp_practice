#include<stdio.h>
#include<stdlib.h>


struct student {
    int id;
    int marks;
};

typedef struct student std;


void printDetails(std *p, int num){
        for(int i = 0;i<num;i++){
            printf("details of student %d\n %d\n%d\n",i+1, p[i].id, p[i].marks);
        }

        
}

int main(){


printf("please enter number of studnets\n");
int num;
scanf("%d", &num);
    std *s = (std*) calloc(1 , sizeof(std));
    for(int i = 0;i<num;i++){
        printf("enter details of %d student, first character id, then marks\n", i+1);
        scanf("%d%d", &s[i].id, &s[i].marks);
    }
   
    printDetails(s, num);
    
}