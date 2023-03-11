#include<bits/stdc++.h>
using namespace std;
vector <int> abc(string str){
    stringstream ss(str);
    vector <int> a;
    string b;
    while(ss>>b){
        cout<<b<<" ";
    }


    return a;
}
int main(){
    vector<int> ab = abc("1,2,3");
}