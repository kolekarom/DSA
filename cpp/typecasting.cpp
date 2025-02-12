#include <iostream>
using namespace std;

int main(){ 
    // //implicit
    // char grade = 'a'; //it is easy beacuse conversion is from small to big
    // int score = grade;
    // cout << score << endl;
    
    // // explicit

    double val = 1000.999;//we sstoring big value in small 
    int val2 = int(val);
    cout << val2 << endl;
}