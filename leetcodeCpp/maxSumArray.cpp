#include<iostream>
using namespace std;
int main(){

    int n = 5; // number of elements in the array
    int arr[5] = {1,-2,6,-1,3}; // array of integers
    int maxSum = INT_MIN; // initialize maxSum to negative infinity
    for(int st = 0; st < n; st++){ // loop through all possible subarrays
        int sum = 0; // initialize sum to 0
        for (int end = st; end < n; end++){ // loop through all possible subarrays
            sum += arr[end]; // add the current element to the sum
        }
        maxSum = max(maxSum, sum);  // update maxSum if the current sum is larger
            

    }
    cout << maxSum << endl; // print the maximum sum
    return 0;


}