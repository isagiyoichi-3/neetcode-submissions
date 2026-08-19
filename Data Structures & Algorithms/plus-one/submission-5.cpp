#include<bits/stdc++.h>

class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        vector<int> v;
        int n=digits.size();
        int carry=0,flag=0;
        for(int i=n-1;i>=0;i--){
            if(digits[i]+1==10){
                digits[i]=0;
                carry=1;
            }
            else{
                digits[i]=digits[i]+1;
                carry=0;
                break;
            }
        }
        if(carry==1){
            digits.insert(digits.begin(),1);
        }
        return digits;
    }
};
