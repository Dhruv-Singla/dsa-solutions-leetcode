class Solution {
public:
    vector<vector<int>> generate(int numRows) {
        vector<vector<int>> result;
        for(int i=0;i<numRows;i++){
            vector<int> row(i+1,1);
            for(int j=1;j<i;j++){
                row[j]=result[i-1][j-1]+result[i-1][j];
            }
            result.push_back(row);
        }
        return result;
    }
};

// Intuition
// adding upper two and so on

// Approach
// added previous 2 elements in new vector full of 1 and then push_back it

// Complexity
// Time complexity: O(n2)
// Space complexity: O(n2)
