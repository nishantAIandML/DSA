#include <bits/stdc++.h>
using namespace std;
class Solution{
    public:
    void nextPermutation(vector<int>& arr) {
        int n=arr.size()-1;
        int pivot=n;
        while(pivot>=1){
            if(arr[pivot-1]<arr[pivot]){
                // pivot--;
                break;
            }
            else{
                pivot--;
            }
        }
        if(pivot==0){
            reverse(arr.begin(),arr.end());
            return;
        }
        pivot--;
        for(int i=n;i>=0;i--){
            if(arr[i]>arr[pivot]){
                swap(arr[i],arr[pivot]);
                break;
            }
        }
        pivot++;
        int i=n;
        while(pivot<i){
            if(arr[i]<arr[pivot]){
                swap(arr[i],arr[pivot]);
                pivot++;
            }
            else{
                i--;
            }
        }
    }
};
int main(){
    Solution s;
    vector<int>v={1,2,3,4};
    for(int i=0;i<24;i++){
        s.nextPermutation(v);
        for(int ele:v){
            cout<<ele<<" ";
        }
        cout<<"|";
    }
}