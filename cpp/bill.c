#include<stdio.h>

void surcharge(float bill){
    printf("%f", bill+(bill*0.15) );
}

void calculateBill(int unit){
    float bill;
    if(unit<199){
        bill = unit*1.20;
        if(bill<100)
        printf("%d", 100);

        if(bill>400)
        surcharge(bill);
    }

    else if(unit>=200 && unit<400){
        bill = unit*1.50;
        if(bill>400)
        surcharge(bill);
    }

    else if(unit>=400 && unit < 600){
        bill = unit*1.80;
        if(bill>400)
        surcharge(bill);
    }

    else{
        bill = unit*2.00;
        if(bill>400)
        surcharge(bill);
    }
}

int main(){
    int unit;
    printf("enter your unit\n");
    scanf("%d", &unit);
    calculateBill(unit);
}