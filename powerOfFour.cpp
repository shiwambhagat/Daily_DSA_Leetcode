#include<iostream>
#include<bitset>
using namespace std;
class Solution{
    public:
bool isPowerOfFour(int n){
    if(n<0) return 0;
    bitset<31> x(n);
    if(x.count()!=1) return 0;
    for(int i=0; i<31;i=i+2){
        if(x[i]==1) return 1;
    }
    return 0;
}};
int main(){
    Solution obj;
    cout<<"Enter your number to check if it is power of four or not"<<endl;
    int n;
    cin>>n;
    bool ans=obj.isPowerOfFour(n);
    if(ans) cout<<"Yes"<<endl;
    else cout<<"No"<<endl;
    return 0;
}