#include <iostream>
#include <vector>
#include <unordered_map>
using namespace std;

class Solution {
    public:
    vector <int> twosum(vector <int>& nums, int target){
        unordered_map <int,int> mpp;
        int complement;
        for (int i=0;i<nums.size();i++){
            complement=target-nums[i];
            if(mpp.find(complement)!=mpp.end()){
                return{mpp[complement],i};
        }
        mpp[nums[i]]=i;

    }
    return {};
}};
int main(){
    Solution sol;
    vector<int> nums={2,11,15,7};
    int target=9;
    vector<int> ans=sol.twosum(nums,target);
    for(int i=0;i<ans.size();i++){
        cout<<ans[i]<<" ";
    }
    
    return 0;
}