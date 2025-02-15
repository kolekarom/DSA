#include <iostream>
using namespace std;

int main(){
int n = 26;

for (int i = 1; i<= n; i++){
    char ch = 'a';
       for (int j = 1;j<=i; j++){
       cout << " "<< ch;
       ch += 1;
       }
    cout<<" "<<endl;
    }

    return 0;
}