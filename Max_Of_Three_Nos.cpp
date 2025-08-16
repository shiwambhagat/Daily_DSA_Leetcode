#include<iostream>
#include<sstream>
#include<algorithm>
#include<vector>
using namespace std;
class Solution{
    public:
    int maxOfThree(vector<int> &nums){
        sort(nums.begin(),nums.end());
        int n=nums.size();
        return max(nums[0]*nums[1]*nums[n-1],nums[n-1]*nums[n-2]*nums[n-3]);
    }
};
int main(){
    Solution sol;
    vector<int> nums;
    cout<<"Enter the numbers space separated"<<endl;
    string line;
    getline(cin,line);
    stringstream ss(line);
    int x;
    while(ss>>x){
        nums.push_back(x);
    }
    int ans=sol.maxOfThree(nums);
    cout<<ans;
}