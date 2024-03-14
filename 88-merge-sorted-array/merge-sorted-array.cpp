class Solution {
public:
    void merge(vector<int>& nums1, int s1, vector<int>& nums2, int s2) {
     
   for(int i=0;i<s2;i++)
        nums1[s1+i]=nums2[i];

    sort(nums1.begin(),nums1.begin()+s1+s2);

    }
};