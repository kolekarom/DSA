#include<iostream>
#include<vector>
using namespace std;
void merge(vector<int> &arr, int st, int mid, int end){
    vector<int > temp;
    int i = st; // starting index for left subarray
    int j = mid + 1; // starting index for right subarray
    while(i <= mid && j <= end){ // merge the two subarrays
        if(arr[i] <= arr[j]){ // change to < for descending order
            temp.push_back(arr[i]);
            i++;
        }else{
            temp.push_back(arr[j]);
            j++;
        }
    }
    while(i <= mid){
        temp.push_back(arr[i]);
        i++;
    }
    while(j <= end){
        temp.push_back(arr[j]);
        j++;
    }
    for(int k = st; k <= end; k++){
        arr[k] = temp[k - st];
    }
}
void mergeSort(vector<int> &arr,int st, int end){
    if(st < end){
        int mid = st + (end - st) / 2;
        mergeSort(arr,st,mid);
        mergeSort(arr,mid+1,end);
        merge(arr,st,mid,end);

    }
}
int main(){
    vector<int> arr = {1,3,5,2,4,6};
    int n = arr.size();
    mergeSort(arr,0,n-1);
    for(int i = 0; i < n; i++){
        cout << arr[i] << " ";
    }
    return 0;


}