#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    vector<int> v = {1, 2, 2, 3, 4, 4, 5};

    sort(v.begin(), v.end());   // Step 1: sort

    auto it = unique(v.begin(), v.end());  // Step 2: remove duplicates

    // v.erase(it, v.end());  // Step 3: erase extra elements

    for(int x : v)
        cout << x << " ";

    return 0;
}