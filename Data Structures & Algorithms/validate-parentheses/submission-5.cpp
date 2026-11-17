class Solution {
public:
    bool isValid(string s) {
        stack<char> st;
        int n=s.size();
        int i=0;
        while(i<n){
            char ch=s[i];
            if(st.empty()){
                st.push(s[i]);

            }
            else{
                if(st.top()=='{'&&ch=='}'){
                    st.pop();
                }
                else if(st.top()=='('&&ch==')'){
                    st.pop();
                }
                else if(st.top()=='['&&ch==']'){
                    st.pop();
                }
                else{
                    st.push(ch);

                }

            }
            i++;
        }
        return st.empty();
        
    }
};
