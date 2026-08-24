class Solution {
public:
    int trap(vector<int>& height) {
        int res=0;
        int n=height.size();
        int i=0,j=n-1;
        vector<int> pre(n);
        vector<int> suf(n);
        pre[0]=height[0];
        suf[n-1]=height[n-1];
        for(int i=1;i<n;i++){
            pre[i]=max(height[i],pre[i-1]);
        }
        for(int i=n-2;i>=0;i--){
            suf[i]=max(height[i],suf[i+1]);
        }
        for(int i=0;i<n;i++){
            res+=(min(pre[i],suf[i])-height[i]);
        }  
        return res;  
    }
};
