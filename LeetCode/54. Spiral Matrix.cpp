class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) {
        vector<int> ans;
        
        int left = 0;
        int top = 0;
        int right = matrix[0].size() - 1;
        int bottom = matrix.size() - 1;
        
        // direction 0 => Left to Right
        //           1 => Top to Bottom
        //           2 => Right to Left
        //           3 => Bottom to Top
        int direction = 0;
        
        while (left <= right && top <= bottom) {
            if (direction == 0) {
                for (int i = left; i <= right; i++) {
                    ans.push_back(matrix[top][i]);
                }
                top++;
            } 
            
            else if (direction == 1) {
                for (int i = top; i <= bottom; i++) {
                    ans.push_back(matrix[i][right]);
                }
                right--;
            } 
            
            else if (direction == 2) {
                for (int i = right; i >= left; i--) {
                    ans.push_back(matrix[bottom][i]);
                }
                bottom--;
            } 
            
            else if (direction == 3) {
                for (int i = bottom; i >= top; i--) {
                    ans.push_back(matrix[i][left]);
                }
                left++;
            }
            
            direction = (direction + 1) % 4;
        }
        
        return ans;
    }
};
