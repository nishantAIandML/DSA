#include <bits/stdc++.h>
using namespace std;
class Solution{
    public:
    int maxSubarraySum(vector<int>&arr){
        int n=arr.size();
        int local_sum=0;
        int sum=INT_MIN;
        for(int i:arr){
            if(i<0){
                if(local_sum+i<0){
                    sum=max(sum,i);
                    local_sum=0;
                }
                else{
                    local_sum+=i;
                }
            }
            else{
                local_sum+=i;
                sum=max(sum,local_sum);
            }
        }
        return sum;
    }
};
int main(){
    Solution s;
    vector<int>v={-2,-1};
    cout<<s.maxSubarraySum(v);
}