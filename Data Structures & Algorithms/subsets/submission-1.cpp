class Solution {
public:
    vector<vector<int>> subsets(vector<int>& nums) {
        vector<vector<int>> v;
        int n=nums.size();
        for(int i=0;i<pow(2,n);i++){
            vector<int> vi;
            for(int j=0;j<n;j++){
                if(i&(1<<j)){
                    vi.push_back(nums[j]);
                    
                }
            }
            v.push_back(vi);

        }
        return v;
        
    }
};
