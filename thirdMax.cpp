#include<iostream>
#include<vector>
#include<sstream>
#include<algorithm>
#include<set>
using namespace std;
class Solution{
    public:
    int thirdMax(vector<int>& nums){
        int n=nums.size();
        set<int,greater<>> st(nums.begin(),nums.end());
        if(st.size()<3) return *st.begin();
        auto it=st.begin();
        advance(it,2);
        return *it;
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
    int ans=sol.thirdMax(nums);
    cout<<ans;
}
