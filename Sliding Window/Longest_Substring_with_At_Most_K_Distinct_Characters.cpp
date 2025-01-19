#include<bits/stdc++.h>
using namespace std;

int solve(int k, string &str)
{
    map<int,int> mp;

    int maxlength = 0;

    int i = 0;
    int j = 0;

    while(j < str.length()){

        mp[str[j]]++;

        while(mp.size() > k && j > i){

            mp[str[i]]--;
            if(mp[str[i]] == 0){
                mp.erase(str[i]);
            }
            i++;
        }

        maxlength = max(maxlength, j-i+1);
        j++;
    }

    return maxlength;
}

int main(){

    string str = "abbbbbbc";
    int k = 2;

    int result = solve(k,str);

    cout<<result<<endl;
}