class Solution {
public:
    int reverse(int x) {
        long count=0;
        while(x){
            count=x%10+count*10;
            x/=10;
            if(count>INT_MAX||count<INT_MIN){
           return 0; 
        } 
        }
        return (int)count;

    }
};
