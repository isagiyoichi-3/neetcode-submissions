class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix) {
        int m=matrix.size();
        int n=matrix[0].size();
        int freq1[200]={0};
        int freq2[200]={0};
        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
                if(matrix[i][j]==0){
                    freq1[i]=1;
                    freq2[j]=1;
                }
            }
        }
        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
                if(freq1[i]||freq2[j]){
                    matrix[i][j]=0;
                }
            }
        }
    }
};
