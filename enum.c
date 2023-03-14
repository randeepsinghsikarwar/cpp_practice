#include<stdio.h>
int main(){
    int march[5][7] = {{0,0,1,2,3,4,5}, {6,7,8,9,10,11,12}, {13,14,15,16,17,18,19},{20,21,22,23,24,25,26}, {27,28,29,30,31,0,0}};
    enum days  {sunday, monday, tuesday, wednesday, thursday, friday, saturday};
    enum week { week_1, week_2, week_3, week_4, week_5};
    printf("monday of third week is %d", march[week_3][monday]);
}