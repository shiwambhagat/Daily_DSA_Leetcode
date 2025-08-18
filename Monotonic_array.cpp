//An array is monotonic if it is either monotone increasing or monotone decreasing.

// An array nums is monotone increasing if for all i <= j, nums[i] <= nums[j]. An array nums is monotone decreasing if for all i <= j, nums[i] >= nums[j].

// Given an integer array nums, return true if the given array is monotonic, or false otherwise.
#include<iostream>
#include<vector>
#include<sstream>
using namespace std;
class Solution {
public:
    bool isMonotonic(vector<int>& nums) {
        int size=nums.size();
       
        if(nums[size-1]<=nums[0]){
            for(int i=0;i<size-1;i++){
                if(nums[i+1]<=nums[i]){
                    continue;
                }
                else return false;
            }
            
        }
        else if(nums[size-1]>=nums[0]){
            for(int j=0;j<size-1;j++){
                if(nums[j+1]>=nums[j]){
                    continue;
                }
                else return false;
            }
           
        }
         return true;
    }
};
 int main(){
    Solution sol;
    cout<<"Enter the numbers space separated"<<endl;
    string line;
    getline(cin,line);
    stringstream ss(line);
    int x;
    vector<int> nums;
    while(ss>>x){
        nums.push_back(x);
    }
    bool ans=sol.isMonotonic(nums);
    if(ans==1){
        cout<<"true";
    }
    else cout<<"false";
 }