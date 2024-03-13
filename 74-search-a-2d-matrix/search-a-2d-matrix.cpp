// class Solution {
// public:
//     bool searchMatrix(vector<vector<int>>& matrix, int target)
//     {

//         int col=matrix[0].size();

//         for(int i=0;i<col;i++)
//         {
//             if(target<=matrix[i][col-1])
//             {
//                 if (find(matrix[i].begin(), matrix[i].end(), target) != matrix[i].end())
//                  {
//                     return true;
//                 }
// }
//         }
//         return false;
   
//     }
// };



class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int rows = matrix.size();
        if (rows == 0) return false;
        
        int cols = matrix[0].size();
        if (cols == 0) return false;
        
        for (int i = 0; i < rows; i++) {
            if (target <= matrix[i][cols - 1]) {
                if (find(matrix[i].begin(), matrix[i].end(), target) != matrix[i].end()) {
                    return true;
                }
            }
        }
        return false;
    }
};
