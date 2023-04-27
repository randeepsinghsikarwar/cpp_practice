#include <iostream>
using namespace std;

class Base
{
public:
    void show()
    {
        cout << "Base class";
    }
};
class Derived : public Base
{
public:
    void show()
    {
        cout << "Derived Class";
    }
};

int mian()
{
    Base b;    // Base class object
    Derived d; // Derived class object
    b.show();  // Early Binding Ocuurs
    d.show();
}
