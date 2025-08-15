//Best time to buy and sell stocks
#include <iostream>
#include <vector>
using namespace std;
class BuySellS{
public :
int buySell(vector<int>& prices) {
    int profit=0;
    int buy=prices[0];
    for(int i=1;i<prices.size();i++){
        if(prices[i]<buy){
            buy=prices[i];

        }
        else if(prices[i]-buy>profit){
            profit=prices[i]-buy;
        }
    }
    return profit;
}};

int main(){
    BuySellS bs;
    vector<int> prices={10,5,11,9,1};
    int ans=bs.buySell(prices);
    cout<<ans;
    return 0;
}