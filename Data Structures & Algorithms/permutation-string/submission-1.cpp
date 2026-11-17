class Solution {
public:
    bool check(string s1,string s2){
        int n1=s1.size();
        int n2=s2.size();
        vector<int> freq1(26,0);
        vector<int> freq2(26,0);
        for(int i=0;i<n1;i++){
            freq1[s1[i]-'a']++;
        }
        for(int i=0;i<n2;i++){
            freq2[s2[i]-'a']++;
        }
        for(int i=0;i<26;i++){
            freq1[i]=freq1[i]-freq2[i];
        }
        for(int i=0;i<26;i++){
            if(freq1[i]>0){
                return false;
            }
        }
        return true;


    }
    string combine(string s,int l,int r){
        string st="";
        for(int i=l;i<=r;i++){
            st+=s[i];
        }
        return st;
    }
    bool checkInclusion(string s1, string s2) {
        int n2=s1.size();
        int n1=s2.size();
        int l=0,r=n2-1;
        while(r<n1){
            if(check(s1,combine(s2,l,r))){
                return true;
            }
            r++;
            l++;
        }
        return false;
    }
};
