#include<iostream>
using namespace std;
class Sum{
    public:
    int x, y;
    Sum(){}
    Sum(int a, int b){
        x = a;
        y = b;
    }

    void showValue(void){
        cout<<"value of x: "<<x<<" value of y: "<<y<<endl;
    }
    void sum (Sum s1, Sum s2){
        x = s1.x + s2.x;
        y = s1.y + s2.y;
        
    }
};
int main(){
    Sum s1(2, 3), s2(4,5), s3;
    s3.sum(s1, s2);
    s3.showValue();

}