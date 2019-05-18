/*
* Input: points = [[1,3],[-2,2]], K = 1
* Output: [[-2,2]]
* Explanation: 
* The distance between (1, 3) and the origin is sqrt(10).
* The distance between (-2, 2) and the origin is sqrt(8).
* Since sqrt(8) < sqrt(10), (-2, 2) is closer to the origin.
* We only want the closest K = 1 points from the origin, so the answer is just [[-2,2]].*/

class Solution {
public:
    vector<vector<int>> kClosest(vector<vector<int>>& points, int K) {
        vector<vector<int>> result; 
        map<int, vector<int>> distances; 
        for (int i=0; i<points.size();i++){
            int distance = pow(points[i][0],2) + pow(points[i][1],2); 
            distances[distance].push_back(i); 
        }
        for (auto x: distances){
            for (auto y:x.second){
                if (result.size()==K) break;
                else
                    result.push_back(points[y]); 
            }
        }
        return result;
    }
};
