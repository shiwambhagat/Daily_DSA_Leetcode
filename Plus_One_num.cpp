#include<vector>
#include<iostream>
#include<sstream>
using namespace std;
class Solution{//1,2,3,9
    public:
    vector<int> plusOne(vector<int>& digits){
        int size=digits.size();
        for(int i=size-1;i>=0;i--){
           if(digits[i]!=9){
            digits[i]++;
            return digits;
            }
            digits[i]=0;
            }
            digits.insert(digits.begin(),1);
             return digits;
        }
       
    };
    int main(){
        Solution sol;
        vector<int> digits;
        cout<<"Enter the digits in space separated"<<endl;
        string line;
        getline(cin,line);
        stringstream ss(line);
        int x;
        while(ss>>x){
            digits.push_back(x);
        }
        vector<int> ans=sol.plusOne(digits);
        for(int i=0;i<ans.size();i++){
            cout<<ans[i];
        }
        return 0;   
    }
