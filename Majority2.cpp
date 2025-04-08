#include <bits/stdc++.h>
using namespace std;
class Solution{
    public:
    vector<int> majority(vector<int>&vec){
        int n=vec.size();
        unordered_map<int,int>mp;
        for(int i:vec){
            mp[i]++;
        }
        vector<int>v;
        for(auto i=mp.begin();i!=mp.end();i++){
            if(mp[i->first]>n/3){
                v.push_back(i->first);
            }
        }
        if(v.size()==2){
            sort(v.begin(),v.end());
        }
        return v;
    }
};
int main(){
    Solution s;
    vector<int>v={2, 1, 5, 5, 5, 5, 6, 6, 6, 6, 6};
    vector<int>ans=s.majority(v);
    for(int i:ans){
        cout<<i<<" ";
    }
}