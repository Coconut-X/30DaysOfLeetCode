class Solution {
public:
    int missingNumber(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int n=nums.size();
        if(nums.back()!=n)return nums.back()+1;
        for(int i=0;i<n;i++)
            if(i!=nums[i])return i;

        return -1;

        
    }
};