#include<iostream>
#include<vector>
using namespace std;

class Solution { // O(n) time complexity
public:
    vector<string> fizzBuzz(int n) { // O(n) space complexity
        vector<string> ans; 
 
        for (int i = 1; i <= n; i++) {  
            ans.push_back( 
                (i % 15 == 0) ? "FizzBuzz" : 
                (i % 5 == 0)  ? "Buzz" :
                (i % 3 == 0)  ? "Fizz" :
                to_string(i)
            );
        }

        return ans;
    }
};
int main(){
    Solution soution;
    vector<string> ans = soution.fizzBuzz(15);
    for (const auto &it : ans) {
        cout << it << " ";
        cout << endl;

    }
}