#include <iostream> // step1
#include <fstream>  // fstream for file handling
using namespace std;
// Employee Data base 1.add 2. modify 3display 4 delete
// check and update code
// add comments
struct emp
{
    int empno, sal;
    char ename[20];
};
class employee
{
    struct emp e;
    fstream f;

public:
    employee()
    {
        f.open("data.dat", ios ::in | ios ::out);
    }
    void add()
    {
        f.seekg(0, ios ::end);
        cout << "Enter emp no";
        cin >> e.empno;
        cout << "Enter name :";
        cin >> e.ename;
        cout << "Enter sal";
        cin >> e.sal;
        f.write((char *)&e, sizeof(e));
    }
    void modify()
    {
        int eno, i = 0, fl = 0;
        f.clear();
        f.clear();
        f.seekg(0);
        cout << "Enter empno to modify";
        cin >> eno;
        while (f.read((char *)&e, sizeof(e)))
        {
            if (e.empno == eno)
            {
                fl = 1;
                break;
            }
            i++;
        }
        if (fl == 1)
        {
            f.seekg(i * sizeof(e), ios ::beg);
            cout << "Enter new ";
            cin >> e.ename;
            cout << "Enter new salary";
            cin >> e.sal;
            f.write((char *)&e, sizeof(e));
            cout << "Record modify" << endl;
        }
        else
        {
            cout << "Record not found" << endl;
        }
    }
    void display()
    {
        f.seekg(0);
        while (f.read((char *)&e, sizeof(e)))
        {
            cout << "Empno : " << e.empno << endl;
            cout << "Ename : " << e.ename << endl;
            cout << "Salary : " << e.sal << endl;
        }
    }

    // We can remove byte :
    void deletee()
    {
        int no;
        ofstream out("sita.txt");
        f.clear();
        cout << "Enter emp no";
        cin >> no;
        f.seekg(0);
        while (f.read((char *)&e, sizeof(e)))
        {
            if (e.empno != no)
                out.write((char *)&e, sizeof(e));
        }
        f.close();
        out.close();
        remove("data.txt");
        rename("sita.txt", "data.txt");
        f.open("data.txt", ios::in | ios::out);
               
    }
};

int main()
{
    employee e;
    e.add();
    e.add();
    e.add();
    e.display();
    e.modify();
    e.display();
    e.deletee();
    return 0;
}