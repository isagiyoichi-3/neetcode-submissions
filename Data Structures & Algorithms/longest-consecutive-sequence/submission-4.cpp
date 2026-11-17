class Solution {
public:
    
    int longestConsecutive(vector<int>& nums) {
        int n=nums.size();
        int res=1;
        sort(nums.begin(),nums.end());
        if(n==0){
            return 0;
        }
        int d=1;
        int left=nums[0];
        for(int i=1;i<n;i++){
            if(nums[i]==left){
                continue;
            }
            else if(nums[i]-nums[i-1]==1){
                d++;
                res=max(d,res);
                left=nums[i];
            }
            else{
                d=1;
            }
        }
        return res;
    }
};
