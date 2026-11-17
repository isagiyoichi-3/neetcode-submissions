class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        map<char,int> m;
        int n=s.size();
        int l=0,r=0,res=0;
        while(r<n){
            m[s[r]]++;
            while(m[s[r]]>1){
                m[s[l]]--;
                l++;
            }
            res=max(res,r-l+1);
            r++;
        }
        return res;
    }
};
