class Solution {
public:
    int bits(int n){
        int count=0;
        while(n){
            count+=n&1;
            n>>=1;
        }
        return count;
    }
    vector<int> countBits(int n) {
        vector<int> v;
        for(int i=0;i<=n;i++){
            v.push_back(bits(i));
        }
        return v;
    }
};
