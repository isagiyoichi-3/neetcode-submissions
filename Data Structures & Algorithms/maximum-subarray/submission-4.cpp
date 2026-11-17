class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int n=nums.size();
        int res=INT_MIN;
        int d=0;
        for(int i=0;i<n;i++){
            if(d<0){
                d=0;
            }
            d+=nums[i];
            
            res=max(res,d);

        }
        return res;

    }
};
