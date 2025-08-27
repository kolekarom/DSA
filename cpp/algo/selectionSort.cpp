#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
void selectionSort(vector<int> & arr , int n){ //time complexity O(n^2)
    for(int i = 0; i < n-1; i++){ // n-1 passes
        int minIndex = i; // index of minimum element
        for(int j = i+1; j < n; j++){ // find the minimum element in unsorted array
            if(arr[j] < arr[minIndex]){
                minIndex = j;
            }
        }
        swap(arr[i], arr[minIndex]); // swap the found minimum element with the first element
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

    selectionSort(arr, n);
    printArray(arr, n);

    return 0;
}