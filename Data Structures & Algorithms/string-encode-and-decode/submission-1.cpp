class Solution {
public:

    string encode(vector<string>& strs) {
        int n=strs.size();
        string s="";
        for(int i=0;i<n;i++){
            s+=to_string(strs[i].size())+"#"+strs[i];
        }
        return s;
    }

    vector<string> decode(string s) {
        vector<string> v;
        int n=s.size();
        int i=0;
        while(i<n){
            int length=0;
            while(s[i]!='#'){
            length=length*10+(s[i]-'0');
            i++; 
        }
        i++;
        string str="";
        for(int j=0;j<length;j++){
            str+=s[i];
            i++;
        }
        v.push_back(str);
        }
        return v;
    }
};
