#include<bits/stdc++.h>
using namespace std;

int solve(string s, string t, int i ,int j){
        
        // if index exceed then return
        if(i >= s.length() || j >= t.length()){
            return 0;
        }

        // if same then increase both the index with include the length

        if(s[i] == t[j]){
            return solve(s, t, i+1, j+1) + 1;  //plus 1 because we got similar character
        }

        int first = solve(s, t, i+1, j); 
        int second = solve(s, t, i, j+1);

        return max(first, second); 

}

int main(){

    string s = "adebc";
    string t = "dcadb";

    int length = solve(s, t, 0,0);

    cout<<length<<endl;


}