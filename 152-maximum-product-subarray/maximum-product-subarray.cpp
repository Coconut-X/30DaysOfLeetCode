class Solution {
public:
    int maxProduct(vector<int>& nums) {
      
        int n = nums.size();    
        if (n == 0)
			return 0;
        int maxProduct = nums[0];
        int minProduct = nums[0];
        int result = maxProduct;
        for (int i = 1; i < n; i++)
        {
			int num = nums[i];
			if (num < 0)
				swap(maxProduct, minProduct);
			maxProduct = max(num, maxProduct * num);
			minProduct = min(num, minProduct * num);
			result = max(result, maxProduct);
		}

        
        return result;
    }
};