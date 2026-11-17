class Solution {
public:
    void convert(string& s){
        int n=s.size();
        for(int i=0;i<n;i++){
            if(s[i]>='A'&&s[i]<='Z'){
                s[i]=s[i]+32;
            }
        }
    }
    bool isPalindrome(string s) {
        int n=s.size();
        int i=0,j=n-1;
        convert(s);
        while(i<j){
            while(i<j&&!isalnum(s[i])){
                i++;
            }
            while(i<j&&!isalnum(s[j])){
                j--;
            }
            if(s[i]!=s[j]){
                return false;
            }
            i++;
            j--;
        }
        return true;

        
    }
};
