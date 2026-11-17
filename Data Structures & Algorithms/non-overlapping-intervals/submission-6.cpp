class Solution {
public:
    static bool comp(vector<int>&a, vector<int>&b){
        return a[1]<b[1];
    }
    int eraseOverlapIntervals(vector<vector<int>>& intervals) {
        int n=intervals.size();
        sort(intervals.begin(),intervals.end(),comp);
        int count=1;
        int init=intervals[0][1];
        for(int i=1;i<n;i++){
            if(init<=intervals[i][0]){
                count++;
                init=intervals[i][1];
            }
        }
        return n-count;   
    }
};
