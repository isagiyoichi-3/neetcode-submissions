class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        vector<vector<int>> v;
        set<vector<int>> s;
        sort(nums.begin(),nums.end());
        int n=nums.size();
        int i=0;
        while(i<n-2){
            int j=i+1;
            int k=n-1;
            while(j<k){
                int res=nums[i]+nums[j]+nums[k];
                if(res==0){
                    s.insert({nums[i],nums[j],nums[k]});
                    j++;
                    k--;
                }
                else if(res<0){
                    j++;
                }
                else{
                    k--;
                }
            }
            i++;
        }
        for(auto i:s){
            v.push_back(i);
        }
        return v;
        
    }
};
