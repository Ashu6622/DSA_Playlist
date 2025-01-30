#include<bits/stdc++.h>
using namespace std;

int solve(string &s, string &t){

     map<char,int> mp;

    for(int i=0;i<t.length();i++){
        mp[t[i]]++;
    }

    // for(int i=0;i<s.length();i++){
    //     int val = mp.find(s[i]) == mp.end();
    //     cout<<val<<" ";
    // }
    

    int i = 0;
    int j = 0;
    int cnt = t.length();

    while(j < s.length()){

        if(mp[s[j]] > 0){
            mp[s[j]]--;
            cnt--;
        }
        // cout<<cnt<<endl;

        if(cnt == 0){
            return true;
        }

        if(j-i+1 == t.length() && cnt != 0){

            int val = mp.find(s[i]) != mp.end();
            if(val){
                cnt++;
                mp[s[i]]++;
            }
            i++;
        }

        j++;
    }

    return false;

}

int main(){

    string s = "eidbaooo";
    string t = "ab";

    int result = solve(s, t);

    cout<<result<<endl;
    
}