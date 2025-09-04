#include<iostream>
#include<vector>
using namespace std;
class Solution { 
public: 
    vector<string> splitWordsBySeparator(vector<string>& words, char separator) { 
        vector<string> ans; // init an empty vector to store the result
        for(int i=0; i<words.size(); i++){  // loop through each word in the vector
            string s = words[i]; // assign the word to a string
            string temp =""; // init an empty string to store the result of split
            for(auto a:s){ // loop through each character in the word
                if(a == separator && temp !=""){ // if the character is the separator and the temp string is not empty
                    ans.push_back(temp); // add the temp string to the result vector
                    temp=""; // reset the temp string
                }
                if(a!=separator) temp+=a; // if the character is not the separator, add it to the temp string
            }
            if(temp!="")ans.push_back(temp); // if the temp string is not empty after the loop, add it to the result vector
        }
        return ans; // return the result vector
    }
};
int main(){
    Solution solution; // create an instance of the Solution class
    vector<string> words = {"hello world", "world hello"}; // create a vector of words
    char separator = ' ';   
    vector<string> result = solution.splitWordsBySeparator(words, separator); // call the function and store the result in the result vector
    for(auto a:result) cout<<a<<" "; // print the result vector
    return 0;
    
}