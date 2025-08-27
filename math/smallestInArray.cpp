#include<iostream>
using namespace std;
int main(){

    int nums[] = {34,35,2,-3,5};
    int n = sizeof(nums)/sizeof(nums[0]);
    int smallest = INT_MAX;
    int index = -1;
    for(int i=0;i<n;i++){
        // if(nums[i]<smallest){
        //     smallest = nums[i];
        // }
        smallest = min(smallest,nums[i]);
        index = i;
    }
    cout << "smallest element is : " << nums[smallest] <<"   " <<index << endl;
}