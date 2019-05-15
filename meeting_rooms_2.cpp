/* Given an array of meeting time intervals consisting of start and end times [[s1,e1],[s2,e2],...] (si < ei), find the minimum number of conference rooms required.
*  Input: [[0, 30],[5, 10],[15, 20]]
*  Output: 2
*/
class Solution {
public:
    int minMeetingRooms(vector<vector<int>>& intervals) {
       //seperate the start time and end times into seperate arrays 
        vector<int> start;
        vector<int> end;
        for (int i=0; i<intervals.size();i++){
            start.push_back(intervals[i][0]);
            end.push_back(intervals[i][1]);
        }
        //sort the start and end times 
        sort(start.begin(),start.end());
        sort(end.begin(),end.end());
        //consider 2 pointers which refer to start pointer and end pointer 
        int sptr=0, eptr=0; 
        int rooms=0; //keeps track of how many rooms we  need 
        while(sptr < start.size()){
            //if there is a meeting that has ended by the time the meeting is at sptr starts
            if(start[sptr]>=end[eptr]){
                rooms-=1; //we can reuse a room
                eptr++;
            }
            rooms++;
            sptr++;
        }
        return rooms;
    }
};
