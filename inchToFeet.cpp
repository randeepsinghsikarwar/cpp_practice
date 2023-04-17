#include<iostream>
using namespace std;
class Distance{
    private:
    int feet, inches;
    public:
    void getter(){
        cout<<"enter values of feet and inches"<<endl;
        cin>>feet>>inches;
    }
    void show(){
        cout<<"feet: "<<feet<<" inches: "<<inches<<endl;
    }
    void sum(Distance d1, Distance d2){
        feet = d1.feet + d2.feet;
        inches = d1.inches + d2.inches;
        if(inches >12){
            feet += inches/12;
        }
    }
};

int main(){
    Distance d1, d2, d3;
    d1.getter();
    d1.show();
    d2.getter();
    d2.show();
    d3.sum(d1, d2);
    d3.show();
}