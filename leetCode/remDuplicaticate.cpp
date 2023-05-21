#include<iostream>
#include<vector>
using namespace std;

int main(){
    vector<int> arr = {0,0,0,1,1,1,1,2,3,3,3};
    int count = 1;
    vector<int> newArr;
    newArr.push_back(arr[0]);
    for(int i = 1;i<arr.size();i++){
        if(arr[i] != arr[i-1]){
            count++;
            newArr.push_back(arr[i]);
        }
    }
    arr = newArr;
    cout<<count<<endl;
    for(auto i : arr){
        cout<<i<<" ";
    }
}
