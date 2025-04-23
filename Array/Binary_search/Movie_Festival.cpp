#include<bits/stdc++.h>
using namespace std;

int main(){

    vector<pair<int,int>> vec = {{3,5}, {4, 9}, {5, 8}};

    sort(vec.begin(), vec.end());

    int cnt = 1;

    int currMovie = vec[0].second;

    for(int i=0;i<vec.size();i++){

        if(vec[i].first >= currMovie){
            cnt++;
            currMovie = vec[i].second;
        }
        else{
            currMovie = min(currMovie, vec[i].second);
        }
    }

    cout<<cnt<<endl;
}