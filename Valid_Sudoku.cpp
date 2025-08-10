#include<unordered_set>
#include<iostream>
#include<vector>
using namespace std;

class Solution {
    public:
    bool isValidSudoku(vector<vector<char>>& board){
        unordered_set<char> rows[9];
        unordered_set<char> cols[9];
        unordered_set<char> boxes[9];
        int boxIndex;
        for(int r=0;r<9;r++){
            for(int c=0;c<9;c++){
                char value=board[r][c];
                if(value=='.'){
                    continue;
                }
                boxIndex=(r/3)*3+(c/3);
                if(rows[r].count(value)||cols[c].count(value)||boxes[boxIndex].count(value)){
                    return false;
                }
                rows[r].insert(value);
                cols[c].insert(value);
                boxes[boxIndex].insert(value);

            }
        }
        return true;
    }
};
int main(){
    vector<vector<char>> board={
        {'5','3','.','.','7','.','.','.','.'},
        {'6','.','.','1','9','5','.','.','.'},
        {'.','9','8','.','.','.','.','6','.'},
        {'8','.','.','.','7','.','.','.','3'},
        {'4','.','.','8','.','3','.','.','1'},
        {'7','.','.','.','2','.','.','.','6'},
        {'.','6','.','.','.','.','2','8','.'},
        {'.','.','.','4','1','9','.','.','5'},
        {'.','.','.','.','8','.','.','7','9'}
    };
    bool ans;
    Solution sol;
    ans=sol.isValidSudoku(board);
    if(ans==0){
        cout<<"false";
    }
    else cout<<"true";

    return 0;
}