class Solution {
public:

    string encode(vector<string>& strs) {
        int n=strs.size();
        string s="";
        for(int i=0;i<n;i++){
            s+=to_string(strs[i].size())+'#'+strs[i];
        }
        return s;

    }

    vector<string> decode(string s) {
        vector<string> v;
        int n=s.size();
        int i=0;
        while(i<n){
            int count=0;
            while(s[i]!='#'){
                count=(count*10)+s[i]-48;
                i++;
            }
            i++;
            string st="";
            for(int j=i;j<i+count;j++){
                st+=s[j];
            }
            i+=count;
            v.push_back(st);
        }
        return v; 

    }
};
