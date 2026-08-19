class Solution {
public:
    int square(int n){
        int count=0;
        while(n){
            count+=(n%10)*(n%10);
            n/=10;
        }
        return count;
    }
    bool isHappy(int n) {
        int num=n;
        map<int,int> m;
        while(square(num)){
            if(square(num)==1){
                return true;
            }
            m[square(num)]++;
            num=square(num);
            for(auto i:m){
                if(i.second>1){
                    return false;
                }
            }
        }
    }
};
