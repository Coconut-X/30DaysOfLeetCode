class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int s=prices.size();
        int currentProfit=0;
        int minVal=prices[0];

        for(int i=1;i<s;i++)
        {
            int d=prices[i]-minVal;
            currentProfit=max(currentProfit,d);
            minVal=min(prices[i],minVal);
        }
       
        return currentProfit;
    }
};