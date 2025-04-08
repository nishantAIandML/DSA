#include <bits/stdc++.h>
using namespace std;
class Solution{
    public:
    int maximumProfit(vector<int>&prices){
        int n=prices.size();
        int profit=0;
        int mini=prices[0];
        for(int i=1;i<n;i++){
            if(prices[i]>mini){
                profit=max(profit,prices[i]-mini);
            }
            mini=min(mini,prices[i]);
        }
        return profit;
    }
};
int main(){
    Solution s;
    vector<int>v={7, 10, 1, 3, 6, 9, 2};
    cout<<s.maximumProfit(v);
}