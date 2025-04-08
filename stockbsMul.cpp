#include <bits/stdc++.h>
using namespace std;
class Solution{
    public:
    int maximumProfit(vector<int>&prices){
        int n=prices.size();
        int profit=0;
        for(int i=1;i<n;i++){
            if(prices[i]>prices[i-1]){
                profit+=prices[i]-prices[i-1];
            }
        }
        return profit;
    }
};
int main(){
    Solution s;
    vector<int>v={100, 180, 260, 310, 40, 535, 695};
    cout<<s.maximumProfit(v);
}