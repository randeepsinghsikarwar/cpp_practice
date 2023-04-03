#include<stdio.h>
int main(){
    FILE *f = fopen("test.txt", "w");
    fprintf(f, "this is file handling \n");
    fprintf(f, "again");
    // fscanf(f,)
    fclose(f);
}