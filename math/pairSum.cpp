#include <iostream>
#include <vector>
using namespace std;

vector<int> pairSum(vector<int> &nums, int target) {  //this is 
    vector<int> ans; //used to store the pairs
    int n = nums.size(); //size of the array
    int i = 0, j = n - 1; //two pointers, one at the start and one at the end

    while (i < j) { //loop until the two pointers meet
        int pairsum = nums[i] + nums[j];  // Fixed variable name 
        if (pairsum > target) { //if the sum is greater than the target
            j--; //move the end pointer to the left
        } else if (pairsum < target) { //if the sum is less than the target
            i++; //move the start pointer to the right
        } else { //if the sum is equal to the target
            ans.push_back(nums[i]);  //add the pair to the answer vector
            ans.push_back(nums[j]); //add the pair to the answer vector
            return ans; //return the answer vector
        }
    }
    return ans; // Return empty vector if no pair found
}

int main() { //main function
    vector<int> nums = {1, 2, 3, 4, 5};  //example array
    int target = 7; //example target
    vector<int> ans = pairSum(nums, target); //call the function

    if (!ans.empty()) { //if the answer vector is not empty
        for (int num : ans) {  //loop through the answer vector
            cout << num << " "; //print the pairs
        }
    } else { //if the answer vector is empty
        cout << "No pair found!"; //print a message
    }
}
