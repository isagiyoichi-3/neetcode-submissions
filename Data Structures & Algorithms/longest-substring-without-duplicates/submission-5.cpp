class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int n=s.size();
        map<char,int> m;
        int res=0;
        int l=0,r=0;
        while(r<n){
            m[s[r]]++;
            while(m[s[r]]>1){
                m[s[l]]--;
                l++;
            }
            res=max(r-l+1,res);
            r++;
        }
        return res;
        
    }
};
