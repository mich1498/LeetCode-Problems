/*
*Given n non-negative integers a1, a2, ..., an , where each represents a point at coordinate (i, ai). n vertical lines are drawn such that the two endpoints of line i is at (i, ai) and (i, 0). 
*Find two lines, which together with x-axis forms a container, such that the container contains the most water.
Input: [1,8,6,2,5,4,8,3,7]
Output: 49
link to problem : https://leetcode.com/problems/container-with-most-water/
*/
class Solution {
public:
    int maxArea(vector<int>& height) {
        int i=0, j=height.size()-1;
        int max_area=0; 
        while (i<j)
        {    int dist=j-i;
             max_area=fmax(max_area,fmin(height[i],height[j])*dist);
             if(height[i]<height[j] )
             {
                 i++;
             }
               else
                  j--;
        }
        return max_area;
    }
};
