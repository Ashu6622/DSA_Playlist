#include<bits/stdc++.h>
using namespace std;

int main(){

    vector<int> alice = {2, 4, 3};
    vector<int> bob = {1, 6, 7};

    priority_queue<pair<int,int>> pq;

    for(int i=0;i<alice.size();i++){
        int sum = alice[i] + bob[i];
        pq.push({sum,i});
    }

    int alice_score = 0;
    int bob_score = 0;

    int flag = true;

    while(!pq.empty()){

        if(flag){
            int index = pq.top().second;
            alice_score += alice[index];
            flag = !flag;
        }
        else{
            int index = pq.top().second;
            bob_score += bob[index];
            flag = !flag;
        }
        pq.pop();
    }

    cout<<alice_score<<" "<<bob_score<<endl;


}