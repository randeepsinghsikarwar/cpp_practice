#include <iostream> 
using namespace std; 
void input(int n,int a[])
{
    for (int i = 0; i < n; i++)
    {
        cout << "arr[" << i << "] = ";
        cin >> a[i];
    }
}
void show(int n, int a[])
{
    cout << "=============" << endl;
    for (int i = 0; i < n; i++)
    {
        cout << a[i] << " ";
    }
    cout << endl;
}
void sum(int n, int a[])
{
    clog << "=============" << endl;
    int s = 0;
    for (int i = 0; i < n; i++)
    {
        s = s + a[i];
    }
    cout << "Sum of all elements : " << s << endl;
}
int main()
{
    cout<<"Enter your size of elements : ";
    int n;
    cin>>n;
    int *arr = new int[n]; // arr[30] 
    input(n,arr); 
    show(n,arr); 
    sum(n,arr);
}
