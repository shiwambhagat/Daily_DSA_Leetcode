#include<iostream>
#include<sstream>
#include<vector>
#include<algorithm>
using namespace std;
 class Solution{
    public:
    vector<int> moveZero(vector<int>& nums){
        int j=0;
        for(int i=0;i<nums.size();i++){
            if(nums[i]!=0){
                swap(nums[i],nums[j]);
                j++;
            }
        }
        return nums;
        }
    };
    int main(){
        vector<int> nums;
        cout<<"Enter the numbers space separated"<<endl;
        string line;
        getline(cin,line);
        stringstream ss(line);
        int x;
        while(ss>>x){
            nums.push_back(x);
        }
        Solution sol;
        vector<int> ans= sol.moveZero(nums);
        for(int i=0;i<nums.size();i++){
            cout<<nums[i]<<" ";
    }
}