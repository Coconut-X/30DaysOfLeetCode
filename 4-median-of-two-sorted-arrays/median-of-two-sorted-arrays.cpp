class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        vector<int>Merge(nums1.size()+nums2.size());

        merge(nums1.begin(),nums1.end(),nums2.begin(),nums2.end(),Merge.begin());
        int size=Merge.size();
        if(size%2==1) 
        {
            return (double)Merge[(size-1)/2];
            //return x;
        }

            return static_cast<double>(Merge[size / 2 - 1] + Merge[size / 2]) / 2;
        
    }
};