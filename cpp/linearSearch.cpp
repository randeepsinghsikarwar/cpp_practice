#include<bits/stdc++.h>
using namespace std;

int linearSearch(vector<int> a, int key, int size){
        for(int i = 0;i< size;i++){
            if(a[i] == key){
                return i;
            }
        }
        return -1;
}

int main(){
    vector<int> arr;
    int n;
    cin>>n;
    for(int i = 0;i<n;i++){
        int a;
        cin>>a;
        arr.push_back(a);
    }

    int key;
    cout<<"which element you wish to find"<<endl;
    cin>>key;


    cout<<linearSearch(arr, key, n);
}