#include<iostream>
#include<unordered_set>
#include<sstream>
#include<vector>
using namespace std;
class Solution{
    public:
    vector<int> ArrayIntersection(vector<int>& nums1,vector<int>& nums2){
        unordered_set<int> nSet(nums1.begin(),nums1.end());
        unordered_set<int> result;
        for(int num:nums2){
            if(nSet.count(num)){
                result.insert(num);
            }

        }
        return vector<int>(result.begin(),result.end());
    }
};
int main(){
    Solution sol;
    string nums1,nums2;
    cout<<"Enter nums1 space separated"<<endl;
    getline(cin,nums1);
    cout<<"Enter nums2 space separated"<<endl;
    getline(cin,nums2);
    vector<int> num1,num2;
    stringstream ss(nums1);
    stringstream ss2(nums2);
    int x,y;
    while(ss>>x ){
        num1.push_back(x);
        
    }
    while(ss2>>y){
         num2.push_back(y); 
    }
    vector<int> ans=sol.ArrayIntersection(num1,num2);
    for(int i=0;i<ans.size();i++){
        cout<<ans[i]<<" ";
    }
return 0;
    
}