#include<bits/stdc++.h>
using namespace std;

void solve(int num, int k, int target, vector<int>& temp){

    if(temp.size() == k || num > 9){
      
        if(target == 0 && temp.size() == k){
          
            for(int i=0 ; i<temp.size() ; i++){
                cout<<temp[i]<<" ";
            }
            cout<<endl;
        }

        return;
    }

    
    if(target >= num){
        temp.push_back(num);
        solve(num+1, k, target-num, temp);
        temp.pop_back();

    }

    solve(num+1, k, target, temp);
}

int main(){

    int target = 8;

    int k = 3;

    vector<int> temp;

    solve(1, k, target, temp);


}