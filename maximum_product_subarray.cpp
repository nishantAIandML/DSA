#include <bits/stdc++.h>
using namespace std;
class Solution{
    public:
    int maxProduct(vector<int>&arr){
        int n=arr.size();
        int prod=INT_MIN;
        int curr=1;
        for(int i:arr){
            if(i<0){
                curr*=i;
                prod=max(prod,curr);
            }
            else if(i==0){
                prod=max(prod,0);
                curr=1;
            }
            else{
                curr*=i;
                prod=max(prod,curr);
            }
        }
        curr=1;
        for(int i=n-1;i>=0;i--){
            if(arr[i]<0){
                curr*=arr[i];
                prod=max(prod,curr);
            }
            else if(arr[i]==0){
                curr=1;
            }
            else{
                curr*=arr[i];
                prod=max(prod,curr);
            }
        }
        return prod;
    }
};
int main(){
    Solution s;
    vector<int>v={-2,0,-1};
    cout<<s.maxProduct(v);
}