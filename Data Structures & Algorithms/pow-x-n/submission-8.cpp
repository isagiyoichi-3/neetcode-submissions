class Solution {
public:
    double myPow(double x, int n) {
        if(x==0){
            return 0;
        }
        if(n==0){
            return 1;
        }
        double num;
        double res=myPow(x,n/2);
        double cal=res*res;
        if(n<0){
            if(n%2==0){
                return cal;

            }
            else{
                return cal/x;
            }
        }
        else{
            if(n%2==0){
                return cal;

            }
            else{
                return cal*x;
            }

        }
    }
};
