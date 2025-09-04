#include<iostream>
using namespace std;
class Solution {
public: 
    bool isPowerOfTwo(int n) { 
        if (n <= 0) return false; // 0 and negative numbers are not powers of two
        long long check = 1; // 2^0 = 1
        while (check <= n) { // keep multiplying by 2 until we exceed n
            if (check == n) return true; // if we reach n, it's a power of two
            check *= 2; // otherwise, keep going
        }
        return false; // if we exit the loop without finding n, it's not a power of two
    }
};

int main(){
    Solution solution;
    cout << boolalpha << solution.isPowerOfTwo(8) << endl; // true
    cout << boolalpha << solution.isPowerOfTwo(10) << endl; // false
    return 0;

}