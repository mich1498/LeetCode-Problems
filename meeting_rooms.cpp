/* Given an array of meeting time intervals consisting of start and end times [[s1,e1],[s2,e2],...] (si < ei), determine if a person could attend all meetings.
*  Input: [[0,30],[5,10],[15,20]]
*  Output: false
*/
class Solution {
public:
    bool canAttendMeetings(vector<vector<int>>& intervals) {
        if (intervals.empty()==true) return true ; 
        vector<int> check; 
        int start, end , next;
        sort(intervals.begin(),intervals.end());
        for (int i=0; i < intervals.size();i++){
            check.insert(check.end(),intervals[i].begin(),intervals[i].end());
        }
        if (check.size()==2){
            return true; 
        }
        for(int i=0; i <check.size()-2;i+=2){
            start=check[i];
            end = check[i+1];
            next=check[i+2];
           
            if (start <= next ){
                if(end > next){
                    return false;
                }
            }
        }
        return true;
    }
};
