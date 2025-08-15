#include<vector>
#include<algorithm>
#include<sstream>
#include<iostream>
using namespace std;

class Solution{
public:
    vector<int> rotateArray(vector<int>& nums,int k){
        int size=nums.size();
        k=k%size;
        reverse(nums.begin(),nums.end());
        reverse(nums.begin(),nums.begin()+k);
        reverse(nums.begin()+k,nums.end());
        return nums;
    }
};
int main(){
    Solution sol;
    vector<int> nums;
    cout<<"enter the numbers in space separated"<<endl;
    string line;
    getline(cin,line);
    stringstream ss(line);
    int x;
    while (ss>>x){
        nums.push_back(x);
    }
    cout<<"enter the value of k"<<endl;
    int k;
    cin>>k;
    nums=sol.rotateArray(nums,k);
    for(int i=0;i<nums.size();i++){
        cout<<nums[i]<<" ";
    }
    return 0;
}