#include <bits/stdc++.h>
using namespace std;
class Solution{
    public:
    int missingNumber(vector<int>&arr){
        sort(arr.begin(),arr.end());
        int miss=1;
        for(int i:arr){
            if(i<=0){
                continue;
            }
            if(i==miss){
                miss++;
            }
            else if(i<miss){

            }
            else{
                return miss;
            }
        }
        return miss;
    }
};
int main(){
    Solution s;
    vector<int>v={-2,0,-1};
    cout<<s.maxProduct(v);
}