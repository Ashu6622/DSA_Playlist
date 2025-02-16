#include<bits/stdc++.h>
using namespace std;

int main(){

    string S = "aab";

    map<char,int> mp;
    priority_queue<pair<int,char>> pq;

    for(int i = 0; i<S.length() ; i++){
        // cout<<S[i]<<endl;
        mp[S[i]]++;
    }

    for(auto it:mp){
        pq.push({it.second, it.first});
    }

    string ans = "";

    while(!pq.empty()){

        auto p1 = pq.top();
        pq.pop();
        int freq_1 = p1.first;
        char ch_1 = p1.second;
        ans += ch_1;
        freq_1--;

        if(pq.size() == 0 && freq_1 >= 1){
            cout<<"Not Possible";
            return 0;
        }

        if(pq.empty()){  //if size become 0 by the removal of top element only i.e only one element is present
            break;
        }

        auto p2 = pq.top();  //to access second top size must be greater then 0
        pq.pop();
        int freq_2 = p2.first;
        char ch_2 = p2.second;
        ans += ch_2;
        freq_2--;

        if(freq_1 > 0){
            pq.push({freq_1, ch_1});
        }
        if(freq_2 > 0){
            pq.push({freq_2, ch_2});
        }
    }



    cout<<ans<<endl;
}