#include<bits/stdc++.h>
using namespace std;

// using LCS to get LPS
// make one extra string, which the reverse of main string, now perform the LCS on both the string, and the resultant length will the LPS

int solve(int i, int j, string s1, string s2){

        //if any one of the string gets over then return 0, no more comparision
        if(i >= s1.length() || j >= s2.length()){
            return 0;
        }

        // if both the characters are same, then add 1 and incerase both the pointers
        if(s1[i] == s2[j]){
            return 
        }


}

int main(){

        string s1 = "abcaa";
       string s2 = "";

       for(int i = s1.length()-1; i>=0;i--){

            s2 += s1[i];
       }

        int result = solve(0, 0,s1, s2);
        cout<<result<<endl;
}