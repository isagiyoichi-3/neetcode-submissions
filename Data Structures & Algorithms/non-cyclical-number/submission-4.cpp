class Solution {
public:
    int square(int n){
        int res=0;
        while(n){
            res+=pow(n%10,2);
            n/=10;
        }
        return res;
    }
    bool isHappy(int n) {
        map<int,int> m;
        bool flag=1;
        while(flag){
            int c=square(n);
            if(c==1){
                return true;
            }
            else if(m[c]>1){
                flag=0;
                break;
            }
            else{
                m[c]++;
                n=c;
            }
        }
        return flag;
        
    }
};
