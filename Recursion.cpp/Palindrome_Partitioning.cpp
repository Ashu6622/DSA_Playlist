#include<bits/stdc++.h>
using namespace std;

bool check(string &str){

    int i = 0;
    int j = str.length()-1;

    while(i <= j){

        if(str[i] != str[j]){
            return false;
        }
        i++;
        j--;
    }

    return true;
}

void solve(int idx, string& S){

    if(idx == S.length()){
        return;
    }

    for(int i=idx ; i<S.length() ; i++){
        string currStr = S.substr(idx, i-idx+1);

        if(check(currStr)){
            cout<<currStr<<endl;
            solve(i+1, S);
        }
    }
}

int main(){

    string S = "aab";

    solve(0, S);
}