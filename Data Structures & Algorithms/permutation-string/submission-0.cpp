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
    bool checkInclusion(string s1, string s2) {
        int n=s2.size();
        for(int i=0;i<n;i++){
            string s="";
            for(int j=i;j<n;j++){
                s+=s2[j];
                if(s.size()==s1.size()&&check(s1,s)){
                    return true;
                }
            }
        }
        return false;
    }
};
