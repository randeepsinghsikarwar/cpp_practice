#include<iostream>
#include<vector>
using namespace std;
int main(){
        vector<int> arr = {0,-1,2,-4,-2,3};
        int sum = arr[0];
        int size = 1;

        for(int i = 1;i<arr.size();i++){
            if(sum+arr[i]>=sum){
                sum+= arr[i];
                size++;
            }
        }

        if(sum - arr[0] > sum){
            size--;
            sum -= arr[0];
        }
        cout<<sum<<" "<<size;
}