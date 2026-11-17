class Solution {
public:
    static bool comp(vector<int>& a , vector<int>& b){
        return a[1]<b[1];
    }
    int eraseOverlapIntervals(vector<vector<int>>& intervals) {
        sort(intervals.begin(),intervals.end(),comp);
        int n=intervals.size();
        int initial=intervals[0][1];
        int count=1;
        int i=1;
        while(i<n){
            if(intervals[i][0]>=initial){
                initial=intervals[i][1];
                count++;
            }
            i++;
        }
        return n-count;
        
    }
};
