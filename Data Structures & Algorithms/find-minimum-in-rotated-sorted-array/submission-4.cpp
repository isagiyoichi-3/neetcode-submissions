class Solution {
public:
    int findMin(vector<int> &nums) {
        int n=nums.size();
        int target=0;
        int i=0,j=n-1;
        while(i<=j){
            int mid=(i+j)/2;
            bool left=(mid==0)||nums[mid]<nums[mid-1];
            bool right=(mid==n-1)||nums[mid]<nums[mid+1];
            if(left&&right){
                target=nums[mid];
                break;
            }
            else if(nums[mid]<nums[j]){
                j=mid;
            }
            else{
                i=mid+1;
            }
        }
        return target;
    }
};
