class Solution {
public:
    static bool compare(pair<int,int>& a,pair<int,int>& b){
        return a.second>b.second;
    }
    vector<int> topKFrequent(vector<int>& nums, int k) {
        vector<int> res;
        int n=nums.size();
        map<int,int> m;
        for(auto i:nums){
            m[i]++;
        }
        vector<pair<int,int>> v;
        for(auto i:m){
            v.push_back({i.first,i.second});
        }
        sort(v.begin(),v.end(),compare);
        for(int i=0;i<k;i++){
            res.push_back(v[i].first);
        }
        return res;
    }
};
