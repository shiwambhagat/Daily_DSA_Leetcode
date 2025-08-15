#include<string>
#include<iostream>
#include<vector>
#include<sstream>
using namespace std;
class Solution{//1,2,3,9  9,9,9
    public:
    vector<int> plusOne(vector<int>& digits){
        string value;
        int size=digits.size();
        for(int num:digits){
           value.push_back('0'+num);
        }
        int carry=1;
        for(int i=size-1;i>=0;i--){
            int sum=(value[i]-'0')+carry;
            value[i]=sum%10+'0';
            carry=sum/10;
        }
        if(carry==1){
            value="1"+value;
        }
        vector<int> res;
        for(char c:value){
            res.push_back(c-'0');
        }
        return res;
    }
};

int main(){
    Solution sol;
    cout<<"Enter the space separated digits"<<endl;
    string line;
    getline(cin,line);
    int x;
    stringstream ss(line);
    vector<int> digits;
    while(ss>>x){
        digits.push_back(x);

    }
    vector<int> ans=sol.plusOne(digits);
    for(int i=0;i<ans.size();i++){
        cout<<ans[i];
    }
    return 0;
}