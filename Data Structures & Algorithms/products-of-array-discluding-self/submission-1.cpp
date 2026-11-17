class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int n=nums.size();
        vector<int> p(n,0);
        vector<int> q(n,0);
        p[0]=1;
        q[n-1]=1;
        for(int i=1;i<n;i++){
            p[i]=p[i-1]*nums[i-1];
        }
        for(int i=n-2;i>=0;i--){
            q[i]=q[i+1]*nums[i+1];
        }
        vector<int> v(n);
        for(int i=0;i<n;i++){
            v[i]=p[i]*q[i];
        }
        return v;

    }
};
