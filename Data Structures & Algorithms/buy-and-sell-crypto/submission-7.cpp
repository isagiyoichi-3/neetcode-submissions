class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int res=0;
        
        int n=prices.size();
        int initial=prices[0];
        for(int i=1;i<n;i++){
            res=max(res,prices[i]-initial);
            if(prices[i]<initial){
                initial=prices[i];
            }

        }
        return res;
    }
};
