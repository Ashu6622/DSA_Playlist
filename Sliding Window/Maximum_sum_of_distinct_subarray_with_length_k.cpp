#include<bits/stdc++.h>
using namespace std;

int main(){

    vector<int> vec = {5,3,3,1,1};
    int k = 3;

    map<int,int> mp;

    int i=0;
    int j=0;
    int sum = 0;
    int maxSum = 0;

    while(j < vec.size()){

        sum += vec[j];
        mp[vec[j]]++;

        if(j-i+1 == k && mp.size() == k){
                maxSum = max(sum, maxSum);
                sum -= vec[i];
                mp.erase(vec[i]);
                i++;
        }
        else if(j-i+1 && mp.size() < k){
                sum -= vec[i];
                mp[vec[i]]--;
                if(mp[vec[i]] == 0){
                    mp.erase(vec[i]);
                }
                i++;
        }

        j++;
    }

    cout<<maxSum<<endl;
}