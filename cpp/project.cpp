#include<iostream>
using namespace std;

void swap(int *p, int *q){
    int temp = *p;
    *p = *q;
    *q = temp;

}

void display(int *p, int *q){
    cout<<"value of x and y after swapping are:"<<endl;
            cout<<*p<<" "<<*q<<endl;

}

void read(int *p, int *q){
    cout<<"enter 2 numbers x and y respectively"<<endl;
    cin>>*p>>*q;
}

int main(){
    int x = 10;
    int y = 0;
    read(&x, &y);
    swap(&x, &y);
    display(&x, &y);
    return 0;
}