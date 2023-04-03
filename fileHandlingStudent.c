#include<stdio.h>
typedef struct student s;
// typedef struct num n;
// struct num{
//     int a, b, c;
// };


struct student{
    int rollNo;
    char stdName[10];
    int m1, m2, m3;
};


s takeData(){
    s student;
    printf("enter roll number of student\n");
    scanf("%d", &student.rollNo);
    printf("enter name of student\n");
    scanf("%s", student.stdName);
    printf("enter mark1 of student\n");
    scanf("%d", &student.m1);
    printf("enter mark2 of student\n");
    scanf("%d", &student.m2);
    printf("enter mark3 of student\n");
    scanf("%d", &student.m3);
    return student;
}

int main(){
    FILE *f;
    s s1 = takeData();
    // n n1 = {1, 2, 3};
    f = fopen("student.txt", "w");
    fprintf(f, "roll number: %d name: %s marks1: %d marks2: %d marks3: %d\n",s1.rollNo, s1.stdName, s1.m1, s1.m2, s1.m3);
    fclose(f);
    // f = fopen("student.txt", "wb");
    // fwrite(&n1, sizeof(n1), 1,f);
    fclose(f);
} 