class Solution {
public:
    vector<vector<int>> merge(vector<vector<int>>& intervals) {
        int n=intervals.size();
        int i=0;
        vector<vector<int>> v;
        sort(intervals.begin(),intervals.end());
        int init=intervals[0][1];
        while(i<n){
            if(v.empty()||init<intervals[i][0]){
                v.push_back(intervals[i]);
                init=intervals[i][1];
                i++;
            }
            else{
                v.back()[1]=max(intervals[i][1],v.back()[1]);
                init=v.back()[1];
                i++;
            }
        }
        return v;
        
    }
};
