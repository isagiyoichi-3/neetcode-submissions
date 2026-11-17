class Solution {
public:
    string multiply(string num1, string num2) {

        if(num1=="0"||num2=="0") return "0";
        reverse(num1.begin(),num1.end());
        reverse(num2.begin(),num2.end());
        int n=num1.size();
        int m=num2.size();
        vector<int> v(n+m,0);
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                v[i+j]+=(num1[i]-48)*(num2[j]-48);
            }
        }
        reverse(v.begin(),v.end());
        for(int i=n+m-1;i>=1;i--){
            v[i-1]+=v[i]/10;
            v[i]%=10;
        }
        string s="";
        int i=0;
        while(i<v.size()&&v[i]==0){
            i++;
        }
        while(i<v.size()){
            s+=(v[i]+48);
            i++;
        }
        return s;

    }
};
