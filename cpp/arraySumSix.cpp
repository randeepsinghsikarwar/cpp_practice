#include<bits/stdc++.h>
using namespace std;
int main(){
    int arr[] = {6,4,2,9,1,8,3,1,1,1,5,1,7};
    int array_size = sizeof(arr)/sizeof(*arr);
    for(int i = 0;i<array_size;i++){
        if(arr[i] == 6)
        cout<<arr[i]<<endl;

        else{
            int sum = 0;
            vector <int> a;
            for(int j = i;j<array_size;j++){
                if(sum+arr[j]<=6){
                a.push_back(arr[j]);
                sum = sum+arr[j];
                }
                else
                break;
            }
            if(sum == 6){
                for(int k = 0;k<a.size();k++){
                    cout<<a[k];
                }
                 cout<<endl;
            }
           
        }
    }
}