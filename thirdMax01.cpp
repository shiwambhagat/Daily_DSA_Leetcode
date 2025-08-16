#include<iostream>
#include<vector>
#include<sstream>
#include<algorithm>
using namespace std;
class Solution{
    public:
    int thirdMax(vector<int>& nums){
        sort(nums.begin(),nums.end(),greater<int>());
        int n=nums.size();
        int counter=0;
        if(n<3) return nums[0];
        for(int i=1;i<n;i++){
            if(nums[i]!=nums[i-1]){ //2 4 9 7 5 -->9 7 5 4 2
                counter++;
            }
            if(counter==3){
                return nums[i-1];
            }
        }

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
