#include <iostream>
#include<sstream>
using namespace std;

class Solution {
public:
    int addTwoNumbers(int num1, int num2) {
        return num1+num2;
    }
};
int main(){
    Solution sol;
    int num1,num2;
    cout<<"Enter num1"<<endl;
    cin>>num1;
    cout<<"Enter num2"<<endl;
    cin>>num2;
    cout<<"The sum is "<<sol.addTwoNumbers(num1,num2)<<endl;
    return 0;
}