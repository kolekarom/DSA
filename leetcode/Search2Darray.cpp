#include<iostream>
#include<vector>
using namespace std;


class Solution { // O(n) time complexity
public:
    bool searchMatrix(vector<vector<int>>& mat, int target) { // O(n) space complexity
        int m = mat.size(); // number of rows
        int n = mat[0].size(); // number of columns
        int r = 0, c = n-1; // start from the top right corner
        while(r < m && c >= 0){ // while we are still in the matrix row from 0 to m-1 and column from n-1 to 0
            if(target == mat[r][c]){ // if the target is found at the current position or at position (r, c)
                return true; // return true
            
            }else if(target <= mat[r][c]){ // if the target is smaller than the current element
                c--; // move left
            }else{ // if the target is larger than the current element
                r++; // move down
            }
        }
        return false; // if the target is not found
    }
};
int main(){ // test the function
Solution solution;
vector<vector<int>> matrix = {{1, 4, 7, 11, 15 }, 
                              {2, 5, 8, 12, 19}, 
                              {3, 6, 9, 16, 22}, 
                              {10, 13, 14 , 17, 24},
                               {18, 21, 23, 26, 30}};
     cout << boolalpha << solution.searchMatrix(matrix, 5) << endl; // true 
     cout << boolalpha << solution.searchMatrix(matrix, 20) << endl; // false
     return 0;
     

}