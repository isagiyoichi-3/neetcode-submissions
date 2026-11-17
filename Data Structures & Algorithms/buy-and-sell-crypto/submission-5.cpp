class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int i=0,j=0;
        int n=prices.size();
        int res=0;
        while(j<n){
            if(prices[i]<prices[j]){
                res=max(res,prices[j]-prices[i]);
            }
            else{
                i=j;
            }
            j++;
        }
        return res;
        
    }
};
