// # 2 approach
// find the longest prefix which is also palindrome
// using KMP algo

#include<bits/stdc++.h>
using namespace std;

// brute approach


class Solution {
public:

bool isPalindrome(string s){

    if(s.length() == 1){
        return true;
    }

    int i = 0;
    int j = s.length()-1;

    while(i < j){

        if(s[i] != s[j]){
            return false;
        }
        i++;
        j--;
    }

    return true;
}
    string shortestPalindrome(string s) {
        
        int maxLength = 0;
        int index = 0;

        for(int i=0;i<s.length();i++){

            if(isPalindrome(s.substr(0, i+1))){
                maxLength = i+1;
            }
        }


        if(maxLength == s.length()){
            return s;
        }

        string ans = "";

        for(int i=maxLength;i<s.length();i++){
            ans += s[i];
        }

        reverse(ans.begin(), ans.end());

        for(int i=0;i<s.length();i++){
            ans += s[i];
        }

        return ans;

    }
};

// using KMP algorithm

int main(){

    string str = "abcde";

    string temp = str;
    reverse(temp.begin(), temp.end());

    string s = str + '$' + temp;

    // construct LPS for s
    
    int n = s.length();

    vector<int> LPS(n,0);

    int i=0;
    int j=1;

    while(j<n){

        // if characters are equal
        if(s[i] == s[j]){
                LPS[j] = i+1;
                i++;
                j++;
        }
        else{  //if not equal

            if(i == 0){
                j++;
            }
            else{
                i = LPS[i-1];
            }
        }
    }


    cout<<str.length()-LPS[n-1]<<endl;
}