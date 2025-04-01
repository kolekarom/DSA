#include<iostream>
using namespace std;
int binarySearch(int arr[] , int size , int target){ //init 
    int left = 0; //left pointer
    int end = size - 1; //right pointer
    while(left <= end){ //while loop for check the left and end pointer
        int mid = left + (end - left) / 2;  //mid pointer
        if(arr[mid] == target){ //if the mid value is equal to the target
            return mid;

        }
        else{
            if(arr[mid] < target){ //if the mid value is less than the target
                left = mid + 1; //move the left pointer to the right

            }
            else{
                end = mid - 1; //move the end pointer to the left

            }
        }
        mid = left + (end - left) / 2; //update the mid pointer
    }
    return -1;
}
int main(){
    int even[5] = {2. ,3 ,5,7,9};
    int odd[5] = {1,3,3,7,9};
    int index;
    index = binarySearch(even , 5 , 5);
    cout <<"Index of 5 in even array is : "<<index<<endl;
    index = binarySearch(odd , 5 , 5);
    cout <<"Index of 5 in odd array is : "<<index<<endl;


}