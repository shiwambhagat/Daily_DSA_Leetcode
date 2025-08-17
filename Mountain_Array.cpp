#include<iostream>
#include<vector>
#include<sstream>
using namespace std;
class Solution{
    public:
    bool isMountainArray(vector<int>& nums){
        int size=nums.size();
        int index=0;
        if(size<3) return false;
        for(int i=1;i<size-1;i++){ // 123454321
            if(nums[i]>nums[i-1] ){
                index++;
            }
            else break;
        }
        if(index==0) return false;
        if(index==size-1) return false;

        for(int j=index;j<size-1;j++){
            if(nums[j+1]<nums[j]){
                continue;
            }
            else return false;
        }
        return true;

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
    bool ans=sol.isMountainArray(nums);
    if(ans==1){
        cout<<"true";
    }
    else cout<<"false";
}