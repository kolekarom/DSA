#include<iostream>
#include<vector>
using namespace std;
class Solution {
public:
    int maxArea(vector<int>& height) { // O(n) time complexity
        int maxArea = 0; // Initialize maxArea to 0
        int left = 0; // Initialize left pointer to 0
        int right = height.size() - 1; // Initialize right pointer to the last index

        while (left < right) { // Continue the loop until left pointer is less than right pointer
            maxArea = max(maxArea, (right - left) * min(height[left], height[right])); // If the height of the left pointer is less than the height of the right pointer, update maxArea with the area of the left pointer, otherwise update maxArea with the area of the right pointer 
            
            if (height[left] < height[right]) { // If the height of the left pointer is less than the height of the right pointer
                left++;  // Move the left pointer to the right
            } else { // If the height of the left pointer is not less than the height of the right pointer
                right--; // Move the right pointer to the left
            }
        }

        return maxArea;         // Return maxArea
    }
};
int main() {
    Solution solution;
    vector<int> height = {1,8,6,2,5,4,8,3,7};
    cout << "maxarea is : ";
    cout << solution.maxArea(height) << endl; // Output: 49
   
}