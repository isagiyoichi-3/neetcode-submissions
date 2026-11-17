class Solution {
public:
    int trap(vector<int>& height) {
        int n=height.size();
        int lmax=0,hmax=0,res=0;
        int i=0,j=n-1;
        while(i<j){
            if(height[i]<=height[j]){
                lmax=max(lmax,height[i]);
                res+=lmax-height[i];
                i++;
            }
            else{
                hmax=max(hmax,height[j]);
                res+=hmax-height[j];
                j--;
            }

        }
        return res;
        
    }
};
