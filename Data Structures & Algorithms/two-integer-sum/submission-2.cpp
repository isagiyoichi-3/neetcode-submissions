class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        int n=nums.size();
        map<int,int> m;
        vector<int> v;

        for(int i=0;i<n;i++){
            int diff=target-nums[i];
            if(m.find(diff)!=m.end()){
                v.push_back(m[diff]);
                v.push_back(i);
                break;
            }
            else{
                m.insert({nums[i],i});
            }
        }
        return v;
        
    }
};
