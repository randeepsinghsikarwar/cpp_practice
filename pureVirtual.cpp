#include <iostream>
using namespace std;
class emp
{
protected:
    int eid;
    float bsal;
    float hra;
    float tsal;

public:
    emp()
    {
        eid = 101;
        bsal = 3500;
        hra = 500;
        cout << "\n\t\t\tBase Class Constructor";
    }
    void disp_base()
    {
        cout << "\n\t\tEmp Id" << eid << " Basic Sal=" << bsal << " HRA=" << hra;
    }
    virtual void calsal() = 0;
}; // End of Class EMP

class trainee : public emp
{
    int renum;

public:
    trainee()
    {
        renum = 1000;
    }

    /*
    If defination of Pure Virtual function (BASE CLASS) is not given in DERRIVED CLASS
    then calling this method using object of derived class will result into ERROR
    during "RUNTIME"
    This will make DERIVED class as ABSTRACT CLASS as well
    */
    void calsal()
    {
        disp_base();
        cout << " and RENUM=" << renum;
        tsal = bsal + hra + renum;
        cout << "\n\t\tTotal salary=" << tsal;
    }

}; // END of CLass TRAINEE

main()
{
    // emp e1;//INVALID ABSTRACT CLASS Instance Can't be created
    emp *e1;
    // e1=new emp();//INVALID
    e1 = new trainee();
    cout << "\n\n\t\t\t\tCalling by BASE Class Pointer";
    e1->calsal();
    cout << "\n\n\t\t\t\tCalling by DERIVED Class";
    trainee t1;
    t1.calsal();
}
// End of MAIN