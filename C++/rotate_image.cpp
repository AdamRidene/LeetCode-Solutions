class Solution {
public:
    void rotate(vector<vector<int>>& matrix) {
        int n = matrix.size();
        queue<int> nums;
        for (int i = 0; i < n; i++) { // columns
            for (int j = n - 1; j >= 0; j--) { // rows (in reverse)
                nums.push(matrix[j][i]);
            }
        }
        for (int a = 0; a < n; a++) { // rows
            for (int b = 0; b < n; b++) { // columns
                matrix[a][b] = nums.front();
                nums.pop();
            }
        }
    }
};
