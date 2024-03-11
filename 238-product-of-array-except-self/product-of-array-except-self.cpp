class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int s=nums.size();
        vector<int>answer(s);
        vector<int>back(s,1);
        vector<int>front(s,1);

        for(int i=1;i<s;i++)
            back[i]=back[i-1]*nums[i-1];

        for(int i=s-2;i>=0;i--)
            front[i]=front[i+1]*nums[i+1];

        for(int i=0;i<s;i++)
            answer[i]=back[i]*front[i];

        return answer;

    }
};