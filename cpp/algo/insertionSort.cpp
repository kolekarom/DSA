#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
void insertionSort(vector<int> & arr , int n){ //time complexity O(n^2)
    for(int i = 1; i < n; i++){ // n-1 passes
        int key = arr[i]; // current element to be inserted
        int j = i - 1; // index of the last element in the sorted array
        while(j >= 0 && arr[j] > key){ // find the position to insert the current element
            arr[j + 1] = arr[j]; // shift elements to the right
            j--;
        }
        arr[j + 1] = key; // insert the current element at the found position
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

    insertionSort(arr, n);
    printArray(arr, n);

    return 0;
}
