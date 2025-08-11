#include<iostream>
#include<vector>
#include<sstream>
#include<unordered_map>
using namespace std;
class Solution{
    public:
    int majorityEle(vector<int>& nums){
        int size=nums.size();
        unordered_map<int,int> check;
        for(int i=0;i<size;i++){
            check[nums[i]]++;
        }
        
        int n=size/2;
        int ans;
        for(auto x: check){
            if(x.second>n){
                n=x.second;
                ans=x.first;
            }
        }
        return ans;
    }
};
int main(){
    Solution sol;
    vector<int> nums;
    string line;
    int x;
    cout<<"enter space separated values"<<endl;
    getline(cin,line);
    stringstream ss(line);
    while(ss>>x){
        nums.push_back(x);
    }
    int ans=sol.majorityEle(nums);
    cout<<ans;
    return 0;
}