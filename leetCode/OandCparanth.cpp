#include<iostream>
#include<vector>
#include<string>
using namespace std;
int main(){
    char str[] = "(()())(()((()))))";
    vector<char> v;
    int i = 0, count = 0;
    while(str[i] != '\0'){
        count++;
        i++;
    }
    for(int i = 0;i< count-1 ;i++){
        if(str[i] == '(' && str[i+1] == ')'){
            v.push_back(str[i]);
            v.push_back(str[i+1]);
            i+=1;
        }
    }
    for(auto i : v){
        cout<< i;
    }
}