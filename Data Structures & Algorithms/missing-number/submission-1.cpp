class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int n=nums.size();
        int total=0,x=0;
        for(int i=0;i<=n;i++){
            x^=i;
        }
        for(int i=0;i<n;i++){
            x^=nums[i];
        }
        return x;
    }
};
