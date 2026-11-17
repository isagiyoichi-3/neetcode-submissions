class Solution {
public:
    int characterReplacement(string s, int k) {
        int n=s.size();
        int r=0,l=0,maxfreq=0,maxlen=0;
        int freq[26]={0};
        while(r<n){
            freq[s[r]-'A']++;
            maxfreq=max(maxfreq,freq[s[r]-'A']);
            while((r-l+1)-maxfreq>k){
                freq[s[l]-'A']--;
                l++;
            }
            if((r-l+1)-maxfreq<=k){
                maxlen=max(maxlen,r-l+1);
            }
            r++;

        }
        return maxlen;
        
    }
};
