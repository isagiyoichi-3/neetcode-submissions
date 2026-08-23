class Solution {
public:
    vector<vector<int>> insert(vector<vector<int>>& intervals, vector<int>& newInterval) {
        vector<vector<int>> v;
        int n=intervals.size();
        int a=newInterval[0];
        int b=newInterval[1];
        int i=0;
        while(i<n&&a>intervals[i][1]){
            v.push_back(intervals[i]); 
            i++;
        }
        while(i<n&&b>=intervals[i][0]){
            a=min(intervals[i][0],a);
            b=max(intervals[i][1],b);
            i++;
        }
        v.push_back({a,b});
        while(i<n){
            v.push_back(intervals[i]);
            i++;
        }
        return v; 
    }
};
