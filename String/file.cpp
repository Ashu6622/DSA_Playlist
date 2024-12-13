#include<bits/stdc++.h>
using namespace std;

int main(){
    string str = "rjne mvriuernvovnovinrv";

    int index = 0;

    for(int i=0;i<str.length();i++){
        if(str[i] == ' '){
            index = i;
            break;
        }
    }

    cout<<index<<endl;
}