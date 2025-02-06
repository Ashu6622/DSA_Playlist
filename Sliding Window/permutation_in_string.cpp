#include<bits/stdc++.h>
using namespace std;

int solve(string &s, string &t){

     map<char,int> mp;

    for(int i=0;i<t.length();i++){
        mp[t[i]]++;
    }

    int i = 0;
    int j = 0;
    int cnt = t.length();

    while(j < s.length()){

        if(mp[s[j]] > 0){
            cnt--;
        }

        mp[s[j]]--;

        if(j-i+1 == t.length() && cnt == 0){
            return true;
        }
        else if(j-i+1 == t.length() && cnt != 0){

            mp[s[i]]++;

            if(mp[s[i]] > 0){
                cnt++;
            }
            i++;
        }

        j++;
    }

    return false;

}

int main(){

    string s = "lecabee";
    string t = "ab";

    int result = solve(s, t);

    cout<<result<<endl;
    
}