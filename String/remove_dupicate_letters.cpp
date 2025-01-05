#include<bits/stdc++.h>
using namespace std;

// Given a string s, remove duplicate letters so that every letter appears once and only once. You must make sure your result is 
// the smallest in lexicographical order
//  among all possible results.

// Example 1:

// Input: s = "bcabc"
// Output: "abc"
// Example 2:

// Input: s = "cbacdcbc"
// Output: "acdb"


string removeDuplicateLetters(string s) {

            map<char, int> mp;

            for(int i=0;i<s.length();i++){
                mp[s[i]] = i;    //store the last index of every characters, to check if the last added character can occur later on
            }

            string str = "";

            map<char, int> freq;  //to check that every character should occur in the output string only once

            for(int i=0;i<s.length();i++){

                if(str == ""){
                    str += s[i];
                    freq[s[i]]++;
                    continue;
                }

                while(str.length() > 0 &&  s[i] < str.back() && mp[str.back()] > i && freq.find(s[i]) == freq.end()){
                        freq[str.back()]--;
                        if(freq[str.back()] == 0){
                            freq.erase(str.back());    
                        }
                        str.pop_back();    //if the last added character is bigger then the current character, then remove it only if the last added character occuring in the future also
                }

                    if(freq.find(s[i]) == freq.end()){  //add the character in the string only if it not present, to avoid duplicates
                        str += s[i];
                        freq[s[i]]++;
                    }
                
                
            }

        return str;
    }


int main(){

    string s = "cbacdcbc";

    string ans = removeDuplicateLetters(s);

    cout<<ans;
}