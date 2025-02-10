#include<bits/stdc++.h>
using namespace std;

int main(){

    string str = "1002991";
    int k = 3;

    stack<char> st;

    for(int i=0;i<str.length();i++){

        while(k > 0 && !st.empty() && st.top() > str[i]){ //if the top element of stack is greater than the current element then pop it from stack
            st.pop();
            k--;
        }

        if(st.size() == 0 and str[i] == '0'){
            continue;
        }

        st.push(str[i]);
    }

    while(k-- && !st.empty()){
        st.pop();
    }

    string ans = "";

    while(!st.empty()){
        ans += st.top();
        st.pop();
    }

    reverse(ans.begin(), ans.end());

    cout<<ans<<endl;
}