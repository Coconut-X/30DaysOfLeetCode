class Solution {
public:
    void sortColors(vector<int>& nums) {
        
        int s=nums.size();
        bool isSwapped;

        for(int i=0;i<s;i++)
        {
            isSwapped=false;
            for(int j=0;j<s-1-i;j++)
            {
                if(nums[j+1]<nums[j]) swap(nums[j],nums[j+1]);
                isSwapped=true;
            }
            if(!isSwapped) break;
        }

    }
};