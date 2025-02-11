#include<bits/stdc++.h>
using namespace std; 

class MinStack{

    public:

    stack<int> s1, s2;

    void insert(int val){
        s1.push(val);

        if(s2.empty()){
            s2.push(val);
        }
        else{
            int x = min(s2.top(), val);
            s2.push(x);
        }
    }

    void delete_back(){

        if(!s1.empty() && !s2.empty()){
            s1.pop();
            s2.pop();
        }
        else{
            cout<<"No Element"<<endl;
        }
    }

    int top_element(){
        int x = INT_MIN;
        if(!s1.empty()){
            x = s1.top();
        }
        else{
            cout<<"No top Element"<<endl;
        }
        return x;
    }

    int getMin(){
        int x = INT_MIN;
        if(!s1.empty()){
            x = s2.top();
        }
        else{
            cout<<"No min Element"<<endl;
        }

        return x;
    }

};



int main(){

    MinStack S;

    S.insert(1);
    S.insert(2);
    cout<<S.top_element()<<endl;
    cout<<S.getMin()<<endl;
    S.insert(-1);
    S.insert(-5);
    S.insert(1);
    S.insert(0);
    S.delete_back();
    cout<<S.top_element()<<endl;
    cout<<S.getMin()<<endl;
    S.delete_back();
    S.delete_back();
    cout<<S.top_element()<<endl;
    cout<<S.getMin()<<endl;
    S.delete_back();
    cout<<S.top_element()<<endl;
    cout<<S.getMin()<<endl;
    S.delete_back();
    cout<<S.top_element()<<endl;
    cout<<S.getMin()<<endl;
    
}   