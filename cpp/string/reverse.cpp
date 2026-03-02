// #include<iostream>
// #include<unordered_map>
// #include<vector>
// using namespace std;
// int main(){
//     string s = "Hello World";
//     reverse(s.begin(),s.end());
//     cout << s << endl;
    
// }
#include <iostream>
using namespace std;

int main() {
    string s = "OmKolekar";

    int n = s.length();

    for(int i = n-1; i >= 0; i--) {
        cout << s[i];
    }

    return 0;
}