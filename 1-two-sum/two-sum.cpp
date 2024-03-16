class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        int s=nums.size();
      


        for(int i=0,j=0;i<s;)
        {
            if(i!=j && nums[i]+nums[j]==target) 
                    return {i,j};
            if(j==s-1)i++,j=0;
            else j++;
        }
        return {};
    }
};