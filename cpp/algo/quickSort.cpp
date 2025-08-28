#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int partition(vector<int> & arr,int st ,int end){
    int pivot = arr[end]; // pivot
    int i = st - 1; // index of smaller element
    for(int j = st; j < end; j++){
        if(arr[j] < pivot){ // if current element is smaller than or equal to pivot
            i++; // increment index of smaller element
            swap(arr[i], arr[j]); // swap current element with index of smaller element
        }
    }
    swap(arr[i + 1], arr[end]); // swap pivot with index of smaller element + 1
    return i + 1; // return partitioning index

}
void quickSort(vector<int> & arr,int st ,int end){
    if (st < end){
        int pivIdx = partition(arr, st, end); // partitioning index
        quickSort(arr, st, pivIdx - 1); // recursively sort elements before partition
        quickSort(arr, pivIdx + 1, end); // recursively sort elements after partition
    }
}
int main (){
    int n = 5;
    vector<int> arr = {5, 3, 8, 4, 2};

    quickSort(arr, 0, n - 1);
    for(int val : arr){
        cout << val << " ";
    }

}