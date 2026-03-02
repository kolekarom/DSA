#include <iostream>
#include <vector>
#include <unordered_map>

using namespace std;

int main() {
    vector<int> v = {1,1,2,3,4,4,5,2};

    unordered_map<int, int> freq;

    // Step 1: Count frequency
    for(int x : v) {
        freq[x]++;
    }

    // Step 2: Print elements occurring more than once
    for(auto &p : freq) {
        if(p.second > 1) {
            cout << p.first << " ";
        }
    }

    return 0;
}