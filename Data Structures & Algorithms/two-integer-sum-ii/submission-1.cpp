class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        vector<int> v;
        int n=numbers.size();
        int i=0,j=n-1;
        while(i<j){
            int res=numbers[i]+numbers[j];
            if(res==target){
                v.push_back(i+1);
                v.push_back(j+1);
                return v;
            }
            else if(res<target){
                i++;
            }
            else{
                j--;
            }

        }
        return v;

        
    }
};
