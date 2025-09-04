#include<iostream>
#include<algorithm>
using namespace std;

class Solution { 
public:
    string gcdOfStrings(string str1, string str2) { 
        if (str1 + str2 != str2 + str1)  { //if the concatination of both the string is not equal retun null
            return ""; 
        }
        
        int n = __gcd(str1.size(), str2.size()); //find the greatest common divisor form string1 and string2
        return str1.substr(0, n); //and return it from here starting and ending index with string 
    }
};