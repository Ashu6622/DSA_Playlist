#include<bits/stdc++.h>
using namespace std;

string solve(string &s, int k, int cnt){

    if(pow(2,cnt-1) >= k){
        return s;
    }

    string temp = "";

    for(int i = 0 ; i < s.length() ; i++){
            if(s[i] == 'z'){
                temp += 'a';
            }
            else{
                temp += s[i] + 1;
            }
    }

    temp = s + temp;
    return solve(temp, k, cnt+1);
}

int main(){

    string s = "a";
    int k = 8;
    int cnt = 1;

   string result = solve(s, k, cnt);

   cout<<result<<endl;
}