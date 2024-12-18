#include<bits/stdc++.h>
using namespace std;

int solve(string str,int start, int end){
     
     if(start > end){
        return 0;
     }

     if(start == end){
        return 1;                  //single character, when pointers are on same index
     }


     if(str[start] == str[end]){
        return solve(str, start+1, end-1) + 2;  //if both the s are same then the length will be 2, as there are two characters which are same
     }

     int left = solve(str, start+1, end);
     int right = solve(str, start, end-1);

     return max(left, right);
}

int main(){
    string str = "abcaa";

    int result = solve(str,0,str.length()-1);

    cout<<result<<endl;
}