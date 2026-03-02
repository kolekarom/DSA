#include <iostream>
#include <vector>

using namespace std;

int main() {
    vector<int> v = {1,2,3,4,5};

    // insertbeginning(6)
    v.insert(v.begin(), 6);

    // insertending(7)
    v.push_back(7);

    // insertatpos(8,4)
    // Position is 1-based index
    int pos = 4;
    v.insert(v.begin() + (pos - 1), 8);

    for(int x : v)
        cout << x << " ";

    return 0;
}