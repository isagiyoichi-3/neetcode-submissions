class Solution {
public:
    int trap(vector<int>& height) {
        int n=height.size();
        int i=0,j=n-1;
        int lmax=0,hmax=0;
        int total=0;
        while(i<=j){
            if(height[i]<height[j]){
                lmax=max(height[i],lmax);
                total+=lmax-height[i];
                i++;
            }
            else{
                hmax=max(height[j],hmax);
                total+=hmax-height[j];
                j--;
            }

        }
        return total;  
    }
};
