class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int i=0;
        int total=0;
        int n=nums.size();
        for(int i=0;i<n;i++){
            total+=nums[i];
        }
        int sum=n*(n+1)/2;
        return sum-total;

    }
};
