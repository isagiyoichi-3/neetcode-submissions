class Solution {
public:
    int climbStairs(int n) {
        int a=1,b=2;
        if(n==1){
            return a;
        }
        else if(n==2){
            return b;

        }
        else{
            for(int i=2;i<n;i++){
                int temp=a+b;
                a=b;
                b=temp;
            }

        }
        return b;
        
    }
};
