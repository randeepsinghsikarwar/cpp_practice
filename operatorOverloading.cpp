#include<iostream>
using namespace std;

class Overloaded{
    public:
    int real, imaginary;
    Overloaded(){}
    Overloaded(int r, int i){
        real = r; 
        imaginary = i;
    }
    void show(){
        cout<<real<<" + "<<imaginary<<"i"<<endl;
    }

    Overloaded operator*(Overloaded o){
        Overloaded result;
        result.real = real * o.real;
        result.imaginary = imaginary * o.imaginary;
        return result;
    }

    Overloaded operator>>(Overloaded o){
        Overloaded result;
        result.real = real + o.real;
        result.imaginary  = imaginary + o.imaginary;
        return result;
    }

    Overloaded operator<<(Overloaded o){
        Overloaded result;
        result.real = real - o.real;
        result.imaginary = imaginary - o.imaginary;
    }

};

int main(){
    Overloaded o1(1,2), o2(2,3), o3;
    o3 = o1*o2;
    o3.show();
    o3 = o1>>o2;
    o3.show();
    o3 = o1<<o2;
    o3.show();
}