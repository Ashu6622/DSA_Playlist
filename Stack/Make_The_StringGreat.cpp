#include<bits/stdc++.h>
using namespace std;

int main(){

    string str = "leEeetcode";

    stack<char> st;

    for(int i=0;i<str.length();i++){

        if(!st.empty() && st.top() == str[i]+32){
            st.pop();
        }
        else{
            st.push(str[i]);
        }
    }

    string ans = "";

    while(!st.empty()){
        ans += st.top();
        st.pop();
    }

    reverse(ans.begin(), ans.end());

    cout<<ans;
}