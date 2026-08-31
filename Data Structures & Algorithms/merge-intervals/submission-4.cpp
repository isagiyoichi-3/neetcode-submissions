class Solution {
public:
    vector<vector<int>> merge(vector<vector<int>>& intervals) {
        sort(intervals.begin(),intervals.end());
        vector<vector<int>> v;
        stack<vector<int>> s;
        int n=intervals.size();
        int l=intervals[0][1];
        for(int i=0;i<n;i++){
            if(v.empty()||l<intervals[i][0]){
                v.push_back(intervals[i]);
                l=intervals[i][1];
            }
            else{
                v.back()[1]=max(intervals[i][1],v.back()[1]);
                l=v.back()[1];
            }
        }
        return v;
        
    }
};
