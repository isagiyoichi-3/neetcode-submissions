class Solution {
public:
    vector<vector<int>> subsetsWithDup(vector<int>& nums) {
        vector<vector<int>> v;
        set<vector<int>> s;
        int n=nums.size();
        for(int i=0;i<pow(2,n);i++){
            vector<int> vi;
            for(int j=0;j<n;j++){
                if(i&(1<<j)){
                    vi.push_back(nums[j]);
                }
            }
            sort(vi.begin(),vi.end());
            s.insert(vi);
        }
        for(auto i:s){
            v.push_back(i);
        }
        return v;
        
    }
};
