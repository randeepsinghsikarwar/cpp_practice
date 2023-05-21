#include<iostream>
#include<vector>
using namespace std;

int main(){
    vector<int> arr = {5,7,7,8,8, 10};
    int target = 8;
    int low = 0, high = arr.size();
    while(low<high){
        int mid = low+high/2;
        if(mid == target){

        }
        else if(target>mid){
            //call mid+1, end
        }

        else{
            // call first mid-1
        }
    }
}