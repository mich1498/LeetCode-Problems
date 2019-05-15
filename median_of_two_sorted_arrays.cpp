/*
*There are two sorted arrays nums1 and nums2 of size m and n respectively. Find the median of the two sorted arrays.
* example: Input:  nums1= [1,3] nums2= [2] 
* output: 2.0
* explanation: the median for 1,2,3 is 2.0 
* NOTE: This is not an optimal solution. Will try to improve on this in the future (Bad Michael :( )
*/
class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        vector<int> Median= nums1; 
        Median.insert(Median.end(),nums2.begin(),nums2.end()); 
        auto const MedianSize= Median.size();     
        sort(Median.begin(),Median.end());
        if (MedianSize %2 ==1 )
        {
            int const Middlenum =MedianSize/2;
            cout<<endl;
            return Median[Middlenum];
        }
        else 
        {
            int const Middlenum =MedianSize/2;
            double median= Median[Middlenum-1]+Median[Middlenum];
            return median/2;
        }
        static const auto speedup = []() { ios::sync_with_stdio( false );    cin.tie( nullptr ); return 0; }();
    }
};
