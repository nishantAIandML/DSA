#include <bits/stdc++.h>
using namespace std;
class Solution{
    public:
    void leftRotate(vector<int>&vec,int d){
        int n=vec.size();
        d=d%n;
        for(int i=0;i<d/2;i++){
            swap(vec[i],vec[d-1-i]);
        }
        for(int i=d;i<d+(n-d)/2;i++){
            swap(vec[i],vec[n+d-1-i]);
        }
        for(int i=0;i<n/2;i++){
            swap(vec[i],vec[n-1-i]);
        }
    }
};
int main(){
    Solution s;
    vector<int>vec={1,2,3,4};
    s.leftRotate(vec,3);
    for(int i:vec){
        cout<<i<<" ";
    }
}