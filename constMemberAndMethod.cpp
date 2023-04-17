#include<iostream>
using namespace std;
class Constant{
    public:
    const int i;
    Constant(): i(20){}
    void show() const{
        cout<<"value of const variable via const method: "<<i<<endl;
    }
};
int main(){
    Constant c1;
    c1.show();
}