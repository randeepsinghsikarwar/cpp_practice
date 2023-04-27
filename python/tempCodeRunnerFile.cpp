#include <iostream>
using namespace std;

class A
{
    int x;

public:
    void setX(int i) { x = i; }
    void printt() { cout << x; }
};

class B : public A
{
public:
    B() { setX(10); }
};

class C : public A
{
public:
    C() { setX(20); }
};

class D : public B, public C
{
};

int main()
{
    D d;
    // d.printt();
    d.B::printt();
    cout<<endl;
    d.C::printt();
    return 0;
}
