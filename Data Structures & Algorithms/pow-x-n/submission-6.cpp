class Solution {
public:
    double myPow(double x,int n){
        long long N=n;
        return cal(x,N);
    }
    double cal(double x, int n) {
        double res=1;
        if(n==0){
            return 1;
        }
        double c=cal(x,n/2);
        if(n%2==0){
            res*=c*c;
        }
        else{
            if(n<0){
                res*=c*c/x;;
            }
            else{
                res*=c*c*x;
            }
        }
        return res;
    }
};
