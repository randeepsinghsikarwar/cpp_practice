#include<stdio.h>
int main(){
    int n1, n2, n3;
    printf("enter 3 numbers\n");
    scanf("%d%d%d", &n1, &n2, &n3);
    if(n1>n2){
        if(n2>n3)
                    printf("%d is the second largest", n2);
    
        else{
            if(n1>n3)
            printf("%d is the second largest", n3);

            else
            printf("%d is the second largest", n1);

        }


    }

    else{
        if()
    }
}