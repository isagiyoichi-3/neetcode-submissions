class Solution {
public:
    int trap(vector<int>& height) {
        int res=0;
        int n=height.size();
        int i=0,j=n-1;
        vector<int> pre(n);
        vector<int> suf(n);
        int current_max_pref=0;
        int current_max_suf=0;
        for(int i=0;i<n;i++){
            pre[i]=max(height[i],current_max_pref);
            if(height[i]>current_max_pref){
                current_max_pref=height[i];
            }
        }
        for(int i=n-1;i>=0;i--){
            suf[i]=max(height[i],current_max_suf);
            current_max_suf=max(height[i],current_max_suf);
        }
        for(int i=0;i<n;i++){
            res+=(min(pre[i],suf[i])-height[i]);
        }  
        return res;  
    }
};
