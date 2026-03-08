#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;
int main(){
    int n;
    cin >> n;
    vector<int> nums(n);
    for(int i = 0; i < n; i++){
        cin >> nums[i];
    }
    int k;
    cin >>k;
    k = k % n; // in case k is greater than n
    rotate(nums.rbegin(), nums.rbegin()+k, nums.rend());

    for(int x : nums)
        cout << x << " ";


}