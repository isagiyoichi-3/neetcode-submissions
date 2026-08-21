/**
 * Definition of Interval:
 * class Interval {
 * public:
 *     int start, end;
 *     Interval(int start, int end) {
 *         this->start = start;
 *         this->end = end;
 *     }
 * }
 */

class Solution {
public:
    static bool comp(Interval &a, Interval &b){
        return a.start<b.start;
    }
    bool canAttendMeetings(vector<Interval>& intervals) {
        sort(intervals.begin(),intervals.end(),comp);
        int n=intervals.size();
        int initial=intervals[0].end;
        for(int i=1;i<n;i++){
            if(intervals[i].start>=initial){
                initial=intervals[i].end;
            }
            else{
                return false;
            }
        }
        return true;
        
    }
};
