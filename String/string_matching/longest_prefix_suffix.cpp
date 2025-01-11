#include<bits/stdc++.h>
using namespace std;

// brute approach to find the longest prefix which is equal to the suffix --> two pointer approach

int main(){

    string s = "ababab";

        int i=0;
        int j=s.length()-1;

        string temp1 = "";
        string temp2 = "";

        string ans = "";

        while(i < s.length() -1 && j > 0){

                temp1 += s[i];

                int k = j;

                while(k < s.length()){
                    temp2 += s[k];
                    k++;
                }

                if(temp1 == temp2){
                    ans = temp1;
                }

                i++;
                j--;
                temp2 = "";
        }

        cout<<ans<<endl;

}