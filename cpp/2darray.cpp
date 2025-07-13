#include<iostream>
using namespace std;
int main(){
    
    // int matrix [3][3];
    
    // int rows = 3;
    // int col = 3;

    // //input
    // for(int i = 0; i<rows; i++){
    //     for(int j = 0; j<col; j++){
    //             cin >> matrix[i][j];
    //     }
    //     cout << endl;
    // }
    // //output
    // for(int i = 0; i<rows; i++){
    //     for(int j = 0; j<col; j++){
    //             cout << matrix[i][j];
    //     }
    //     cout << endl;
    // }

    //linear search
    bool linearSearch(matrix[][3] , int rows , int cols , int key){
        for(int i = 0; i<rows; i++){
        for(int j = 0; j<col; j++){
                if (mat[i][j] == key){
                    return true;
                }
        }
        cout << endl;
    }
    }
    int main(){
        int matrix[3][3] = {{1,2,3},{4,5,6},{7,8,9}};
        int rows = 3;
        int cols = 3;

        cout << linearSearch(matrix , rows , cols , 5);
    }
   
    
    return 0;

}