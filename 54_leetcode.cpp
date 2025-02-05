class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) {
        int i = 0, j = 0, k = matrix.size(), l = matrix[0].size();
        vector<int> arr;
        while (i < k && j < l) {
            for (int it_right = j; it_right < l; it_right++) {
                arr.push_back(matrix[i][it_right]);
            }
            i++;
            for (int it_down = i; it_down < k; it_down++) {
                arr.push_back(matrix[it_down][l-1]);
            }
            l--;
            if (i < k) {
                for (int it_left = l - 1; it_left >= j; it_left--) {
                    arr.push_back(matrix[k-1][it_left]);
                }
                k--;
            }

            if (j < l) {
                for (int it_up = k - 1; it_up >= i; it_up--) {
                    arr.push_back(matrix[it_up][j]);
                }
                j++;
            }
        }
        return arr;
    }
};
// Approach
// used four "for" loops for iterating right, down, left, up

// Complexity
// Time complexity: O(n*m)
// Space complexity: O(n*m)
