class Solution {
public:
    bool isAnagram(string s, string t) {
        map<char,int> a;
        map<char,int> b;
        int n=s.size();
        int m=t.size();
        if(n!=m){
            return false;
        }
        for(int i=0;i<n;i++){
            a[s[i]]++;
            b[t[i]]++;  
        }
        auto it=a.begin();
        auto it1=b.begin();
        while(it!=a.end()||it1!=b.end()){
            if((*it).first!=(*it1).first){
                return false;
            }
            else if((*it).second!=(*it1).second){
                return false;
            }
            it++;
            it1++;
        }
        return true;
    }
};
