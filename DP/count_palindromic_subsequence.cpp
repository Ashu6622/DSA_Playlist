#include<bits/stdc++.h>
using namespace std;

int solve(string &str, int i, int j){

    if(i > j){
        return 0;
    }

    if(i == j){
        return 1;  //single element is always palindrome
    }

    // if the characters are equal
    if(str[i] == str[j]){
        int cnt = solve(str, i, j-1) + solve(str, i+1, j) + 1;  //we are adding 1 because we got 1 palindrome
        return cnt;
    }
    else{
        int cnt = solve(str, i, j-1) + solve(str, i+1, j) - solve(str, i+1, j-1);  //here we are subtracting the same character is counted both function call so we are deleting one
        return cnt;
    }
}

int main(){

    string str = "abca";

    int result = solve(str, 0, str.length()-1);

    cout<<result<<endl;

}