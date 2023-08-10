#include <bits/stdc++.h> 
#include <iostream>
using namespace std;

int main() {
    int bs;
    char grade;
    cin>>bs>>grade;

    int allow = 0;
    switch(grade){
        case 'A': 
        allow = 1700;
        break;

        case 'B':
        allow = 1500;
        break;
        
        default:
        allow = 1300;
        break;
    }

    cout<<bs + (0.2*bs) + (0.5*bs) + allow - (0.11*bs)<<endl;
    return 0;
}