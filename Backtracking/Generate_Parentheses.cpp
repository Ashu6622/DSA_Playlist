#include<bits/stdc++.h>
using namespace std;


bool isValid(string &temp){

    int count = 0;

    for(int i=0;i<temp.size();i++){
        if(temp[i] == '('){
            count++;
        }
        else{
            count--;
        }

        if(count < 0){
            return false;
        }
    }

    return count == 0;
}
void generate(int n, string &temp){

    if(2*n == temp.size()){
        
        if(isValid(temp)){
            cout<<temp<<endl;
        }
        return;
    }

    temp += '(';
    generate(n, temp);
    temp.pop_back();

    temp += ')';
    generate(n, temp);
    temp.pop_back();
}

int main(){

    int n = 3;

    string temp = "";

    generate(n, temp);
}