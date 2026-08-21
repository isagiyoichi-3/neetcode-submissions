class Solution {
public:
    bool isPalindrome(string s) {
        string st1="";
        int n=s.length();
        string st2="";
        for(int i=0;i<n;i++){
            if(s[i]>=48&&s[i]<=57||s[i]>=97&&s[i]<=122||s[i]>=65&&s[i]<=90){
                if(s[i]>=65&&s[i]<=90){
                    st1+=(s[i]+32);

                }
                else{
                    st1+=s[i];

                }
            }
        }
        for(int i=n-1;i>=0;i--){
            if(s[i]>=48&&s[i]<=57||s[i]>=97&&s[i]<=122||s[i]>=65&&s[i]<=90){
                if(s[i]>=65&&s[i]<=90){
                    st2+=(s[i]+32);
                }
                else{
                    st2+=s[i];

                }
            }
        }
        if(st1==st2){
            return true;
        }
        return false;
        
    }
};
