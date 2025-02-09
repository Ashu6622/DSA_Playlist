// Related Question
// 1) Number of Partition that can be done so that every partition string is palindrome

// Q) Palindrome Partitioning

#include<bits/stdc++.h>
using namespace std;

bool isPalindrome(string &s, int start, int end){

    while(start<=end){

        if(s[start] != s[end]){
            return false;
        }
        start++;
        end--;
    }
    return true;

}

void solve(int index, string &s, vector<string>& temp, vector<vector<string>> &ans){

    if(index >= s.length()){
        ans.push_back(temp);
        return;
    }

    for(int i = index ; i<s.length() ; i++){

        if(isPalindrome(s,index, i)){  //we will do partition only if the current substring is palindrome
            temp.push_back(s.substr(index, i-index+1));
            solve(i+1, s, temp, ans);
            temp.pop_back();  //first remove then extent the string
        }
    }

}

int main(){

    string s = "aaaa";

    vector<vector<string>> ans;
    vector<string> temp;

    solve(0, s, temp, ans);

    for(int i=0;i<ans.size();i++){
        for(int j=0; j<ans[i].size();j++){
            cout<<ans[i][j]<<" ";
        }
        cout<<endl;
    }
}

