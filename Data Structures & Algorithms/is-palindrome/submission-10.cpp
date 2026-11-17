class Solution {
public:
    void convert(string& s){
        int n=s.size();
        for(int i=0;i<n;i++){
            if(s[i]>=65&&s[i]<=90){
                s[i]=s[i]+32;
            }
        }
    }
    bool isPalindrome(string s) {
        convert(s);
        int n=s.size();
        int i=0,j=n-1;
        while(i<=j){
            if(i<=j&&!isalnum(s[i])){
                i++;
                continue;
            }
            else if(i<=j&&!isalnum(s[j])){
                j--;
                continue;
            }
            else if(s[i]!=s[j]){
                return false;
            }
            else{
                i++;
            j--;

            }
        }
        return true;
    }
};
