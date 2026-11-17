class Solution {
public:
    int hour(vector<int>& piles, int res){
        int n=piles.size();
        int total=0;
        for(int i=0;i<n;i++){
            total+=(piles[i]+res-1)/res;
        }
        return total;


    }
    int minEatingSpeed(vector<int>& piles, int h) {
        int n=piles.size();
        sort(piles.begin(),piles.end());
        int i=1,j=piles[n-1];
        while(i<j){
            int mid=i+(j-i)/2;
            if(hour(piles,mid)<=h){
                j=mid;
            }
            else{
                i=mid+1;
            }
        }
        return i;
    }
};
