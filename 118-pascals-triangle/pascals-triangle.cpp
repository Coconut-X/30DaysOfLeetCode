class Solution {
public:
    vector<vector<int>> generate(int numRows) {
    
    vector<vector<int>>result(numRows);
    for (int i = 0; i < numRows; ++i) 
    {
            result[i].resize(i + 1); //each row has one more col than previous one
            result[i][0] = result[i][i] = 1;//first and last elements are always one

            for (int j = 1; j < i; ++j) 
                result[i][j] = result[i - 1][j - 1] + result[i - 1][j]; //formula 
    }
    return result;
    }
};