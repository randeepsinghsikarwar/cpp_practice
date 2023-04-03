#include <stdio.h>
void main()
{
    FILE *f1;
    char FILENAME[20];
    printf("Enter File Name: ");
    gets(FILENAME);
    f1 = fopen(FILENAME, "w");
    int stno, id, sub, marks[10], total = 0, i, j;
    char name[20];
    printf("Enter Student Details:\n");
    printf("\nHow many student: ");
    scanf("%d", &stno);
    for (i = 1; i <= stno; i++)
    {
        printf("\nEnter Student ID : ");
        scanf("%d", &id);
        fflush(stdin);
        printf("\nEnter Student Name: ");
        gets(name);
        printf("\nEnter how many subject: ");
        scanf("%d", &sub);
        fprintf(f1, "Number of students=%d\nId=%d\nname=%s\ntotal_subject=%d", stno, id, name, sub);
        printf("\nEnter your marks\n");
        for (j = 1; j <= sub; j++)
        {
            scanf("%d", &marks[j]);
            fprintf(f1, "\nsubject[%d]=%d\n", j, marks[j]);
        }
        printf("\n");
    }
    fclose(f1);
    f1 = fopen(FILENAME, "r");
    fscanf(f1, "%d", &stno);
    for (i = 1; i <= stno; i++)
    {
        fscanf(f1, "%d %s %d", &id, name, &sub);
        printf("Student[%d]\n", i);
        printf("Id=%d\n", id);
        printf("Name=%s\n", name);
        printf("Total subject=%d\n", sub);
        for (j = 1; j <= sub; j++)
        {
            fscanf(f1, "%d", &marks[j]);
            total = total + marks[j];
        }
        printf("\nTotal Marks=%d", total);
        fprintf(f1, "total number=%d", total);
        printf("\n");
    }
    fclose(f1);
}