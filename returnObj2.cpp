#include<iostream>
using namespace std;

class Test{
    public:
    int real, imaginary; 
    Test(){}
    Test(int r, int i){
        real = r;
        imaginary = i;
    }
    void show(){
        cout<<real<<" + "<<imaginary<<"i"<<endl;
    }
    Test sum (Test t1){
        Test t2;
        t2.real = real + t1.real;
        t2.imaginary = imaginary + t1.imaginary;
        return t2;
    }
};

int main(){
    Test t1(1,2), t2(2,3), t3;
    t3 = t1.sum(t2);
    t3.show();
}