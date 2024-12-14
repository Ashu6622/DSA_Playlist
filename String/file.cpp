#include<bits/stdc++.h>
using namespace std;

int main(){
    string str = "rjne mvriuernvovnovinrv";

    int index = 0;
    int ch = 'n';

    for(int i=0;i<str.length();i++){
        if(str[i] == 'n'){
            index = i;
            break;
        }
    }

    cout<<index<<endl;
}