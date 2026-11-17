class Solution {
public:
    string minWindow(string s, string t) {
        string result="";
        int n=s.size();
        int m=t.size();
        int r=0,l=0,start=0,end=0,count=0;
        int freq2[128]={0};
        for(int i=0;i<m;i++){
            freq2[t[i]]++;
        }
        int minlen=INT_MAX;
        if(n<m){
            return "";
        }
        while(r<n){
            if(freq2[s[r]]>0){
                count++;
            }
            freq2[s[r]]--;
            while(count==m){
                if(r-l+1<minlen){
                    minlen=r-l+1;
                    start=l;
                }
                freq2[s[l]]++;
                if(freq2[s[l]]>0){
                    count--;
                }
                l++;
            }
            r++;
            
        }
        return minlen==INT_MAX?"":s.substr(start,minlen);
        
    }
};
