#include<stdio.h>
int main(){
    int i,sum=0;
    FILE *f;
    f=fopen("int.bin","w");
    for(i=0;i<10;i++){
        putw(i,f);
    }
    fclose(f);
    f=fopen("int.bin","r");
    while(i=getw(f)!=EOF){
    sum=sum+i;
    printf("%d\n",i);   
    }
        printf("%d\n",sum);   
fclose(f);
}