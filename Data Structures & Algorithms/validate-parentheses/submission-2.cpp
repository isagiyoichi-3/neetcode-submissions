class Solution {
public:
    bool isValid(string s) {
        stack<char> st;
        int n=s.size();
        int i=0;
        while(i<n){
            char ch=s[i];
            if(ch==')'&&!(st.empty())&&st.top()=='('||ch=='}'&&!(st.empty())&&st.top()=='{'||ch==']'&&!(st.empty())&&st.top()=='['){
                st.pop();
            }
            else{
                st.push(ch);
            }
            i++;
        }
        if(st.empty()){
            return true;
        }
        return false;
        
    }
};
