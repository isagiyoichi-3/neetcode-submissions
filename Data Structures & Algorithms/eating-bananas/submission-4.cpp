class Solution {
public:
    int rate(vector<int>& piles,int h){
        int total=0;
        int n=piles.size();
        for(int i=0;i<n;i++){
            total+=(piles[i]+h-1)/h;
        }
        return total;
    }
    int minEatingSpeed(vector<int>& piles, int h) {
        sort(piles.begin(),piles.end());
        int n=piles.size();
        int i=1;
        int j=piles[n-1];
        while(i<j){
            int mid=i+(j-i)/2;
            if(rate(piles,mid)<=h){
                j=mid;
            }
            else{
                i=mid+1;
            }

        }
        return i;   
    }
};
