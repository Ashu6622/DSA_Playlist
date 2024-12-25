#include<bits/stdc++.h>
using namespace std;

int main(){

    int n = 6;

    string ans = "1";
    int k = n-1;

    if(k <= 0){
        cout<<"0";
        return 0;
    }

    while(k--){

    char curr = ans[0];
    int count = 0;
    string temp = "";

            for(int i=0;i<ans.length();i++){

                if(curr != ans[i]){
                    temp += to_string(count);
                    temp += curr;
                    curr = ans[i];
                    count = 0;
                }

                if(curr == ans[i]){
                    count++;
                }
            }

                    temp += to_string(count);
                    temp += curr;
                    ans = temp;
    }

    cout<<ans<<endl;
}