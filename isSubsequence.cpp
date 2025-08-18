#include<iostream>
#include<sstream>
#include<string>
using namespace std;
class Solution{
    public:
    bool isSubsequence(string word,string sentence){
        int wd=0;
        int st=0;
        if(word.length()>sentence.length()) return false;
        if(word.length()==0) return true;
        while(wd<word.length()&&st<sentence.length()){
            if(word[wd]==sentence[st]){
                wd++;
            }
            st++;
        }
        if(wd==word.length()) return true;
        return false;
    }
};
int main(){
    Solution sol;
    string word,sentence;
    cout<<"Enter the sentence"<<endl;
    cin>>sentence;
    cout<<"Enter the word"<<endl;
    cin>>word;
    bool ans=sol.isSubsequence(word,sentence);
    if(ans) cout<<"true"<<endl;
    else cout<<"false"<<endl;
    return 0;
}
