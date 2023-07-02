#include <iostream>
using namespace std;
const int m = 10;
class Stack
{
    int top;
    int a[m];

public:
    Stack();
    void push(int n);
    int pop();
    void display();
};
Stack::Stack()
{
    int top = -1;
}
// Add an element to the stack
void Stack::push(int n)
{
    if (top == m - 1)
    {
        cout << "Stack is full" << endl;
        return;
    }
    top++;
    a[top] = n;
}
// Extracts an elements from the stack
int Stack::pop()
{
    if (top == -1)
    {
        cout << "Stack is Empty" << endl;
        return 0;
    }
    int data = a[top];
    top--;
    return data;
}
void Stack::display()
{
    for (int i = 0; i <= top; i++)
        cout << a[i] << " ";
    cout << endl;
}
int main()
{
    Stack s;
    int o, n, d;
    while (true)
    {
        cout << "\tStack " << endl;
        cout << "\t=======" << endl;
        cout << "Enter 1 for push the value " << endl;
        cout << "Enter 2 for pop the value " << endl;
        cout << "Enter 3 for display " << endl;
        cout << "Enter 4 for exit" << endl;
        cout << "Enter your choice : ";
        cin >> o;
        switch (o)
        {
        case 1:
            cout << endl
                 << "Enter the value : ";
            cin >> n;
            s.push(n);
            break;
        case 2:
            d = s.pop();
            if (d != 0)
                cout << "popped iteam is : " << d << endl;
            break;
        case 3:
            s.display();
            break;
        case 4:
            cout << "Thankyou\n";
            exit(0);
        default:
            cout << "You are not Enter the right option " << endl;
        } // switch
    }     // loop
}
