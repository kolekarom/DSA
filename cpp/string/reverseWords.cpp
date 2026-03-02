#include<iostream>
#include<unordered_map>
#include<vector>
#include<sstream>
using namespace std;
int main(){
    string s = "Hello World";
    vector<string> words;
    string word;
    stringstream ss(s);
    while(ss >> word){
        words.push_back(word);
    }
    reverse(words.begin(), words.end());
    for(int i = 0; i < words.size(); i++){
        cout << words[i];
        if(i != words.size() - 1){
            cout << " ";
        }
    }
    
}