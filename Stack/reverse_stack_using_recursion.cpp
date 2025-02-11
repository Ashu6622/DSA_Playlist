 #include<bits/stdc++.h>
 using namespace std;

 void insertAtbottom(stack<int> &st, int val){

    if(st.empty()){
        st.push(val);
        return;
    }

    int x = st.top();
    st.pop();
    insertAtbottom(st, val);

    st.push(x);
 }


 void reverse(stack<int>& st){

    if(st.empty()){
        return;
    }

    int val = st.top();
    st.pop();
    reverse(st);

    insertAtbottom(st, val);
 }


 int main(){

    // this follow the approach of insert at the bottom of stack recursively

    stack<int> st;
    
    for(int i=1;i<=5;i++){
        st.push(i);
    }

    reverse(st);

    while(!st.empty()){
        cout<<st.top()<<" ";
        st.pop();
    }

 }