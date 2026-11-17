class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int n=nums.size();
        int i=0,j=0,d=0,res=INT_MIN;
        while(j<n){
            d+=nums[j];
            res=max(res,d);
            if(d<0){
                d=0;
            }
            j++;
        }
        return res;

    }
};
