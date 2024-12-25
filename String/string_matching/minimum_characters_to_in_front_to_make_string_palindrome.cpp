// # 2 approach
// find the longest prefix which is also palindrome
// using KMP algo

#include<bits/stdc++.h>
using namespace std;

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