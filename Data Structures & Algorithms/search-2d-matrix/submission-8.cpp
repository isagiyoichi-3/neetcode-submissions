class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int n=matrix.size();
        int m=matrix[0].size();
        int i=0,j=n-1;
        int k=0,l=m-1;
        int targetrow=-1;
        while(i<=j){
            int mid=(i+j)/2;
            if(matrix[mid][k]<=target&&matrix[mid][l]>=target){
                targetrow=mid;
                break;
            }
            else if(matrix[mid][l]<target){
                i=mid+1;
            }   
            else{
                j=mid-1;
            }   
        }
        if(targetrow==-1){
            return false;
        }
        while(k<=l){
            int mid=(k+l)/2;
            if(matrix[targetrow][mid]==target){
                return true;
            }
            else if(matrix[targetrow][mid]<target){
                k=mid+1;
            }
            else{
                l=mid-1;
            }
        }
        return false;
    }
};
