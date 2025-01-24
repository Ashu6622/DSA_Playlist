#include<bits/stdc++.h>
using namespace std;

int solve(string& s){
    
    int maxlength = 0;

    int i=0;
    int j=0;
    map<char,int> mp;
    int n = s.length();

    while(j < n){

        mp[s[j]]++;
        
        while(mp[s[j]] > 2 && j > i){
            mp[s[i]]--;
            if(mp[s[i]] == 0){
                mp.erase(s[i]);
            }
            i++;
        }

        maxlength = max(maxlength , j-i+1);
        j++;
    }
    return maxlength;
}

int main(){

    string s = "bcbbbcba";
    
    int length = solve(s);

    cout<<length<<endl;

}