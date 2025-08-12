#include<iostream>
#include<set>
#include<sstream>
#include<vector>
using namespace std;
class Solution{
    public:
    int removeDup(vector<int>& nums){
        set<int> st(nums.begin(),nums.end());
        nums.assign(st.begin(),st.end());
        return nums.size();
    }
};
int main(){
    Solution sol;
    vector<int> nums;
    string line;
    cout<<"Enter the numbers space separated"<<endl;
    getline(cin,line);
    stringstream ss(line);
    int x;
    while(ss>>x){
        nums.push_back(x);
    }
    int ans=sol.removeDup(nums);
    cout<<ans;
    return 0;
}