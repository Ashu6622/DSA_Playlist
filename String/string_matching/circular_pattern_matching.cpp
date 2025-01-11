#include<bits/stdc++.h>
using namespace std;

void findLPS(vector<int>&LPS, string &s){

    int i=0;
    int j=1;

    while(j<s.length()){

        if(s[i] == s[j]){

            LPS[j] = i+1;
            i++;
            j++;
        }
        else{

            if(i == 0){
                LPS[j] = 0;
                j++;
            }
            else{
                i = LPS[i-1];
            }
        }
    }

}

int main(){
    string s1 = "cdeabroab";
    string s2 = "abcfe";

    // find s2 in s1 
    // s1 is a circular string

    // find the LPS of s2, we are finding LPS of s2 becase we have to search s2 in s1

    int n = s2.length();

    // we are concatenating s1, because it is a circular string
    string str = s1+s1;

    vector<int> LPS(n , 0);

    // findLPS of s2
    findLPS(LPS, s2);

    // now compare the string s1 and s2
    int i=0;
    int j=0;


    while(i < str.length() && j < s2.length()){

        if(str[i] == s2[j]){
            i++;
            j++;
        }
        else{
            if(j == 0){
                i++;
            }
            else{
                j = LPS[j-1];
            }
        }
    }


    if(j == n){
        cout<<"Present";
        return 0;
    }

    cout<<"Not Present"<<endl;

    return 0;

}