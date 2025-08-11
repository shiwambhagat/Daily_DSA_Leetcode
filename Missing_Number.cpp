#include<vector>
#include<iostream>
using namespace std;
class Solution{
    public:
    int missingNumber(vector<int> &nums){
        int n=nums.size();
        int ans=n;
        for(int i=0;i<n;i++){
            ans=ans^i^nums[i];
        }
        return ans;
    }
};
int main(){
    Solution sol;
    cout<<"enter the size of the array"<<endl;
    int n;
    cin>>n;
    cout<<"enter the numbers "<<endl;
    
    vector<int> nums(n);
    for(int i=0;i<n;i++){
        cin>>nums[i];
        
    }
    int ans=sol.missingNumber(nums);
    cout<<ans;
    return 0;
}