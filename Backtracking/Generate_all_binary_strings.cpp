#include<bits/stdc++.h>
using namespace std;

void generateBinary(int n, string &temp){

    if(temp.size() == n){
        cout<<temp<<endl;
        return;
    }

    temp += '0';
    generateBinary(n, temp);
    temp.pop_back();

    if(temp.back() != '1'){
        temp += '1';
        generateBinary(n, temp);
        temp.pop_back();
    }

}

int main(){

    int n = 3;
    string temp = "";
    generateBinary(n, temp);
}