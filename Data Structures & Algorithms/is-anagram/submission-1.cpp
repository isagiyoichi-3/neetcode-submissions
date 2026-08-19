class Solution {
public:
    bool isAnagram(string s, string t) {
        int freq1[256]={-1};
        int freq2[256]={-1};
        int n=s.size();
        int m=t.size();
        if(m!=n){
            return false;
        }
        for(int i=0;i<n;i++){
            freq1[s[i]]++;
            freq2[t[i]]++;
        }
        for(int i=0;i<256;i++){
            if(freq1[i]!=freq2[i]){
                return false;
            }
        }
        return true;

    }
};
