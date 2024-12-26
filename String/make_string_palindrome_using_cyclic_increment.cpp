#include<bits/stdc++.h>
using namespace std;

// Input: str1 = "abc", str2 = "ad"
// Output: true
// Explanation: Select index 2 in str1.
// Increment str1[2] to become 'd'. 
// Hence, str1 becomes "abd" and str2 is now a subsequence. Therefore, true is returned.

// Input: str1 = "ab", str2 = "d"
// Output: false
// Explanation: In this example, it can be shown that it is impossible to make str2 a subsequence of str1 using the operation at most once. 
// Therefore, false is returned.

// Input: str1 = "zc", str2 = "ad"
// Output: true
// Explanation: Select indices 0 and 1 in str1. 
// Increment str1[0] to become 'a'. 
// Increment str1[1] to become 'd'. 
// Hence, str1 becomes "ad" and str2 is now a subsequence. Therefore, true is returned.

int main(){

    string s1 = "zc";
    string s2 = "aa";

    int i=0;
    int j=0;

    while(i < s1.length() && j < s2.length()){

            if(s1[i] == 'z' && s2[j] == 'a'){
                i++;
                j++;
                continue;
            }

            if(s1[i] == s2[j] || s1[i] + 1 == s2[j]){
                j++;
            }
            i++;
    }

    if(j == s2.length()){
        cout<<"True"<<endl;
        return 0;
    }

    cout<<"False"<<endl;


}





