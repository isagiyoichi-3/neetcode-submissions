class Solution {
public:
    bool isValidSudoku(vector<vector<char>>& board) {
        int n=9;
        for(int i=0;i<9;i++){
            map<char,int> m;
            for(int j=0;j<9;j++){
                if(board[i][j]!='.'){
                    m[board[i][j]]++;
                    if(m[board[i][j]]>1){
                        return false;
                    }
                }
            }
        }
        for(int i=0;i<9;i++){
            map<char,int> m;
            for(int j=0;j<9;j++){
                if(board[j][i]!='.'){
                    m[board[j][i]]++;
                    if(m[board[j][i]]>1){
                        return false;
                    }
                }
            }
        }
        int k=0;
        while(k<9){
            int sr=(k/3)*3;
            int sc=(k%3)*3;
            map<char,int> m;
            for(int i=0;i<3;i++){
                for(int j=0;j<3;j++){
                    if(board[sr+i][sc+j]!='.'){
                        m[board[sr+i][sc+j]]++;
                        if(m[board[sr+i][sc+j]]>1){
                            return false;
                        }
                    }

                }
            }
            k++;
        }

        
        return true;
    }
};
