#include<bits/stdc++.h>
using namespace std;

void solve(string pat, string &s, int index, vector<int>& freq, string &ans){

    // cout<<index<<endl;
    if(index >= pat.length()){
        if(ans > s){
            ans = s;
        }
        cout<<s<<endl;
        return;
    }


        if(pat[index] == 'I'){

            // int n = s.back()+'0';
            for(int i=1 ; i<=9 ; i++){

                    if(freq[i] == 0){
                        s += i + '0';
                        freq[i] = 1;
                        solve(pat, s, index+1, freq, ans);
                        s.pop_back();
                        freq[i] = 0;
                    }
            }

        }
        else{

            // int n = s.back()-'0';
            // if(n == 1){
            //     n = 9;
            // }
            for(int i=9 ; i>0 ; i--){
                
                if(freq[i] == 0){
                    s += i + '0';
                    freq[i] = 1;
                    solve(pat, s, index+1, freq, ans);
                    s.pop_back();
                    freq[i] = 0;
                }
            }

        }

}

int main(){

        string pat = "DDD";

        string s = "";
        vector<int> freq(10, 0);

        // if(pat[0] == 'I'){
        //     s = "1";
        //     freq[1] = 1;
        // }
        // else{
        //     s = to_string(pat.length());

        // }

        string ans = "987654321";
        

        solve(pat, s, 0, freq, ans);

        cout<<ans<<endl;
}