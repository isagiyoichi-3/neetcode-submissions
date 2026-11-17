class Solution {
public:
    bool isAnagram(string s, string t) {
        int n=s.size();
        int m=t.size();
        if(n!=m){
            return false;
        }
        int freq1[26]={0};
        int freq2[26]={0};
        for(int i=0;i<n;i++){
            freq1[s[i]-'a']++;
            freq2[t[i]-'a']++;
        }
        for(int i=0;i<26;i++){
            if(freq1[i]!=freq2[i]){
                return false;
            }
        }
        return true;
        
    }
};
