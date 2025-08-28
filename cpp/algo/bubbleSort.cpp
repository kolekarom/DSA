#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

void bubbleSort(vector<int> & arr , int n){ //time complexity O(n^2)
    for(int i = 0; i < n-1; i++){ // n-1 passes
    bool isSwap = false; // to check if any swap happened
        for(int j = 0; j < n-i-1; j++){ // n-i-1 comparisons for each pass to  avoid already sorted elements
            if(arr[j] > arr[j+1]){
                swap(arr[j], arr[j+1]);
                isSwap = true; // swap happened
            }
        }
        if(!isSwap) break; // if no swap happened, array is already sorted
    }
}
void printArray(vector<int> & arr, int n){
    for(int i = 0; i < n; i++){
        cout << arr[i] << " ";
    }
    cout << endl;
}

int main(){
    int n = 5;
    vector<int> arr = {5, 3, 8, 4, 2};

    bubbleSort(arr, n);
    printArray(arr, n);

    return 0;
}