#include <bits/stdc++.h>
using namespace std;
class Solution{
    public:
    string addBinary(string& s1, string& s2) {
        int carry=0;
        string s="";
        int i=s1.length()-1;
        int j=s2.length()-1;
        while(i>=0 && j>=0){
            int a=int(s1[i])-int('0');
            int b=int(s2[j])-int('0');
            s+=char(int('0')+a^b^carry);
            carry=(a&b)|(b&carry)|a&carry;
            i--;
            j--;
        }
        while(i>=0){
            int a=int(s1[i])-int('0');
            s+=char(int('0')+a^carry);
            carry=carry&a;
            i--;
        }
        while(j>=0){
            int b=int(s2[j])-int('0');
            s+=char(int('0')+b^carry);
            carry&=b;
            j--;
        }
        if(carry==1){
            s+='1';
        }
        reverse(s.begin(),s.end());
        while(s[0]=='0'){
            s=s.substr(1);
        }
        return s;
    }
};
int main(){
    Solution s;
    string s1="00001";
    string s2="111110";
    cout<<s.addBinary(s1,s2);
}