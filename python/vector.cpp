#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<int> m;
    for(int i = 0;i<6;i++){
        int n;
        cin>>n;
        m.push_back(n);
    }
    m.pop_back();
    for(int i=1; i<m.size();i++){
        cout<<m[i]<<" ";
    }  
}