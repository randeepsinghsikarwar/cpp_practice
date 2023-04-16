#include<iostream>
#include<vector>
using namespace std;

class Solution {
 
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<int> mySol;
        for(int i = 0;i<nums.size() ;i++){
            for(int j = i+1;j<nums.size();j++){
                if(nums[i] + nums[j] == target){
                mySol.push_back(i);
                mySol.push_back(j);
                break;
                }             
            }
            if(mySol.size() == 0)
            break;
        }
        return mySol;
    }
};

int main(){
    Solution s;
    
}