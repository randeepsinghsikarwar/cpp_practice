#include<iostream>
using namespace std;
struct a
    {
        int val;
        int r;
        int c;
    };
int main(){
    int s1, s2;
    cin>>s1>>s2;
    int r = s1+1;
    int c = s2+1;
    a arr[c][r] = {0};

    for(int i = 0;i<s1;i++){
        cin>>arr[0][i+2].val;
    }
    for(int i = 0;i<s2;i++){
        cin>>arr[i+2][0].val;
    }



    for(int i = 0;i<=c;i++){
        for(int j = 0;j<=r;j++){
            cout<<arr[i][j].val<<" ";
        }
        cout<<endl;
    }
}