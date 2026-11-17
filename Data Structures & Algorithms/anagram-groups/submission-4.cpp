class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        int n=strs.size();
        vector<vector<string>> v;
        map<string,vector<string>> m;
        for(int i=0;i<n;i++){
            string st=strs[i];
            sort(strs[i].begin(),strs[i].end());
            m[strs[i]].push_back(st);
        }
        for(auto i:m){
            v.push_back(i.second);
        }
        return v;
        
    }
};
