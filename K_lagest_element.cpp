/*Find the kth largest element in an unsorted array. Note that it is the kth largest element in the sorted order, not the kth distinct element.
* Input: [3,2,1,5,6,4] and k = 2
* Output: 5
*
* Input: [3,2,3,1,2,4,5,5,6] and k = 4
* Output: 4
*/
//there are 2 ways you could solve this 
// 1. sort the numbers and return the n-kth element, this is a boring solution with T.C O(NlogN)
// we can do better
// create a min heap and scan the list of numbers , if the heap size is > k , we pop the smallest element from the heap
// time complexity here would be of order O(N log k) where k is the size of the heap  and k<=N which is a slightly
// better solution 
class Solution {
public:
    int findKthLargest(vector<int>& nums, int k) {
        priority_queue<int,vector<int>, greater<int>> pq;
        for (auto x:nums){
            pq.push(x);
            if(pq.size() > k){
                pq.pop();
            }
        }
        int result = pq.top();

        return result;;

    }
};
