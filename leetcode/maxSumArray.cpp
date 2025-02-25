#include<iostream>
using namespace std;
int main(){

    int n = 5;
    int arr[5] = {1,2,3,4,5};
    int maxSum = INT_MIN;
    for(int st = 0; st < n; st++){
        int sum = 0;
        for (int end = st; end < n; end++){
            sum += arr[end];
        }
        maxSum = max(maxSum, sum);
            

    }
    cout << maxSum << endl;
    return 0;


}