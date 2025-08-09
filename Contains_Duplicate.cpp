#include<iostream>
#include<sstream>
#include<vector>
#include<unordered_map>
using namespace std;
 class Solution{
    public:
    bool containsDuplicate(vector <int>& nums){
        unordered_map<int,int> mpp;
        for(int i=0;i<nums.size();i++){
            if(mpp.find(nums[i])!=mpp.end()){
                return true;
            }
            mpp[nums[i]]=1;
        }
        return false;
    }
 };
 int main() {
    vector<int> nums;
    string line;
    cout<<"Enter the space separated numbers"<<" "<<endl;
    getline(cin,line);
    stringstream ss(line);
    int x;
    while(ss>>x){
        nums.push_back(x);
    }
    Solution sol;
    bool ans=sol.containsDuplicate(nums);
    if(ans==1){
    cout<<"true";
     }else cout<<"false";
 }