class Solution {
public:
    static bool comp(pair<int,int> &a, pair<int,int> &b){
        return a.second>b.second;
    }
    vector<int> topKFrequent(vector<int>& nums, int k) {
        vector<int> v;
        map<int,int> m;
        int n=nums.size();
        for(int i=0;i<n;i++){
            m[nums[i]]++;
        }
        vector<pair<int,int>> vi;
        for(auto i:m){
            vi.push_back({i.first,i.second});
        }
        sort(vi.begin(),vi.end(),comp);
        for(int i=0;i<k;i++){
            v.push_back(vi[i].first);
        }
        return v;
    }
};
