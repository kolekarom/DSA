#include <iostream>
#include <vector>
#include <unordered_set>

using namespace std;

int main() {
    vector<int> v = {1, 3, 4, 2, 2};

    unordered_set<int> seen;

    for(int x : v){
        if(seen.find(x) != seen.end()){
            cout << x << endl;
            return 0;
        }
        seen.insert(x);
    }
}