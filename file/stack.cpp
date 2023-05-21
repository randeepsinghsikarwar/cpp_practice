#include<iostream>
#include<vector>

using namespace std;

struct MyStack{
    int top;
    vector<int> arr;

    MyStack(){
        top = -1;
    }

    void push(int num){
        top++;
        arr.push_back(num);
    }
    void pop(){
        if(top == -1){
            cout<<"underflow!"<<endl;
        }
        else{
            top--;
            arr.pop_back();
        }
    }

    int peek(){
        if(top == -1){
            cout<<"stack is empty"<<endl;
        }
        else{
            return arr[top];
        }
    }

    int size(){
        return top + 1;
            }

    bool isEmpty(){
        return(top == -1? true : false);
    }
};

int main(){
    char c;
    MyStack s1;
    while(1){
        int choice;
        cout<<"1. insert 2. delete 3. check top element 4. size of the stack 5. is stack empty?"<<endl;
        cin>>choice;
        if(choice == 1){
            int n;
            cout<<"what you wish to insert?"<<endl;
            cin>>n;
            s1.push(n);
        }
        else if(choice == 2){
            s1.pop();
        }
        else if(choice == 3){
            cout<<s1.peek()<<endl;
        }

        else if(choice == 4){
            cout<<"stack size:" <<s1.size()<<endl;
        }
        else if(choice == 5){
            cout<<s1.isEmpty()<<endl;
        }

        else{
            cout<<"invalid choice"<<endl;
        }
        cout<<"press n to exit"<<endl;
        cin>>c;
        if(c == 'N' || c == 'n')
        break;
    }
}