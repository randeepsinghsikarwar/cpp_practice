#include<iostream>
#include<string>
#include<algorithm>

using namespace std;
void rever(string& str){
    int n = str.length();
    for(int i = 0;i<n/2;i++){
        swap(str[i],str[n-i-1]);
    }
}

string fun(long n){
    string out = "";
    while(n!=1){
        n%2 == 0? out+="0":out+="1";
        n = n/2;
    }
    out+="1";
    rever(out);
    return out;
}

int main(){
    long a;
    cin>>a;
    cout<<fun(a)<<endl;
}