class Solution {
public:
    int maxArea(vector<int>& heights) {
        int n=heights.size();
        int i=0,j=n-1;
        int res=0;
        while(i<j){
            res=max(min(heights[i],heights[j])*(j-i),res);
            if(heights[i]<=heights[j]){
                i++;
            }
            else{
                j--;
            }

        }
        return res;
        
    }
};
