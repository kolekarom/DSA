#include <iostream>
#include <vector>
using namespace std;

class Solution {  
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        int n = nums.size();  // Store the size of the array
        
        for (int i = 0; i < n; i++) {  // Loop through each element
            for (int j = i + 1; j < n; j++) {  // Loop through remaining elements
                if (nums[i] + nums[j] == target) {  // Check for match
                    return vector<int>{i, j};  // Return indices
                }
            }
        }
        return vector<int>();  // If no pair is found, return empty vector
    }
};

int main() {
    Solution sol;  // Create an object of Solution class
    int n, target;
    
    // Taking user input for array size and elements
    cout << "Enter the size of the array: ";
    cin >> n;

    vector<int> nums(n);  // Create a vector of size n
    cout << "Enter " << n << " elements: ";
    for (int i = 0; i < n; i++) {
        cin >> nums[i];
    }

    // Taking input for target value
    cout << "Enter the target sum: ";
    cin >> target;

    // Calling the function and storing the result
    vector<int> result = sol.twoSum(nums, target);

    // Displaying output
    if (!result.empty()) {
        cout << "Indices: [" << result[0] << ", " << result[1] << "]" << endl;
    } else {
        cout << "No pair found that sums to target." << endl;
    }

    return 0;
}
