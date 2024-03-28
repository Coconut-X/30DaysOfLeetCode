class Solution {
public:
    vector<bool> kidsWithCandies(vector<int>& candies, int extraCandies) {
        int x=*max_element(candies.begin(),candies.end());
        int s=candies.size();
        vector<bool>result(s,0);

        for(int i=0;i<s;i++)
            {
                if(extraCandies+candies[i]>=x) result[i]=true;
                ///else result[i]=false;
            }
            return result;
        
    }
};