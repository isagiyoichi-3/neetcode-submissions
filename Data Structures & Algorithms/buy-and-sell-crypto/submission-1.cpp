class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int n=prices.size();
        int m=0,low=prices[0];
        for(int i=1;i<n;i++){
            if(prices[i]<low){
                low=prices[i];
            }
            m=max(m,prices[i]-low);
        }
        return m;
        
    }
};
