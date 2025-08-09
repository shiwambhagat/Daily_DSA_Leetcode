#include<iostream>
#include<unordered_set>
#include<vector>
#include<sstream>
using namespace std;
 class Solution{
    public:
    bool ContainsDuplicate(vector <int>& nums){
        unordered_set<int> seen;
        for(auto num : nums){
            if(seen.count(num)) return true;
            seen.insert(num);
        }
        return false;
    }
 };
 int main(){
    vector <int> nums;
    cout<<"Enter space separated values"<<endl;
    string line;
    getline(cin,line);
    stringstream ss(line);
    int x;
    while(ss>>x){
        nums.push_back(x);
    }
    Solution sol;
    bool ans=sol.ContainsDuplicate(nums);
    if(ans==0){
        cout<<"false";
    }
    else cout<<"true";

 }