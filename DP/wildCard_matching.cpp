#include<bits/stdc++.h>
using namespace std;

// Given an input string (s) and a pattern (p), implement wildcard pattern matching with support for '?' and '*' where:

// '?' Matches any single character.
// '*' Matches any sequence of characters (including the empty sequence).
// The matching should cover the entire input string (not partial).


// Example 1:
// Input: s = "aa", p = "a"
// Output: false
// Explanation: "a" does not match the entire string "aa".

// Example 2:
// Input: s = "aa", p = "*"
// Output: true
// Explanation: '*' matches any sequence.

bool solve(string &s1, string &s2, int i, int j){

    // base case 1-> when both the string gets over at the same time then it is the right case

    if(i >= s1.length() && j >= s2.length()){
        return true;
    }


    // base case 2-> when string s2 get over but s1 is still remaining, then s1 will never match with s2

    if(j >= s2.length() && i < s1.length()){
        return false;
    }

    // base case 3-> when the string s1 is over but s2 is still remaining, so travel the remaining string s2 and if all the remaining characters of s2 are "*",so all this "*"  can turn to empty and s2 will be equal to s1, but any character other then "*" is present in the remaining part of s2 then s2 will be never equal to s1 

    if(i >= s1.length() && j < s2.length()){

        for(int k = j; k<= s2.length(); k++){

            if(s2[k] != '*'){
                return false;
            }
            
        }
        return true;
    }

    // if the characters are matched or s2[j] == '?' , then move both the string s1 and s2
    if(s1[i] == s2[j] || s2[j] == '?'){
        return solve(s1, s2, i+1, j+1);
    }
    else if(s2[j] == '*'){  //if s2[j] == "*", then "*" can be treated as empty " " or any sequence, so there are options
        bool empty = solve(s1, s2, i, j+1);
        bool matching_sequence = solve(s1,s2,i+1, j);
        return empty || matching_sequence;  //ans can come from any of the options
    }
    else{   //if the characters of s1 and s2 not matched
        return false;
    }
}

int main(){

    string s1 = "abc";
    string s2 = "??";

    bool result = solve(s1, s2, 0, 0);

    cout<<result;

}