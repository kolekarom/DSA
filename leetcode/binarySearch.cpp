#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int BinarySearch(vector<int>& arr, int target) {
    int left = 0;
    int right = arr.size() - 1;
    while (left <= right) {
        int mid = left + (right - left) / 2;
        if (arr[mid] == target) {
            return mid;
        }else if (arr[mid] < target) {
            left = mid + 1;
        }else {
            right = mid - 1;
        }
    }
    return -1;
}
int main(){
    vector<int> arr = {1, 2, 3, 4, 5 , 6, 7, 8, 9, 10};
    int target = 5;
    int result = BinarySearch(arr, target);
    if(result != -1){
        cout<<"Element is present at index "<<result<<endl;
    }
    else{
        cout<<"Element is not present in array"<<endl;
    }

return 0;
}