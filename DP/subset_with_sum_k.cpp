#include<bits/stdc++.h>
using namespace std;

bool solve(int index, int k, vector<int>& arr, vector<vector<int>> &dp){

    if(k == 0){
        return true;
    }

    if(index == 0){  //first index

            if(arr[0] == k){
                return true;
            }

            return false;
    }

    if(dp[index][k] != -1){
        return dp[index][k];
    }

    int take = false;

    if(k >= arr[index]){
        take = solve(index-1, k-arr[index], arr, dp);
    }

    int nottake = solve(index-1, k, arr, dp);

    dp[index][k] = take || nottake;

    return take || nottake;
}

int main(){

    vector<int> arr = {1, 2, 3, 1};

    int k = 2;

    vector<vector<int>> dp(arr.size()+1, vector<int>(k+1, -1));

    bool result = solve(arr.size()-1, k, arr, dp);

    if(result){
        cout<<"True"<<endl;
        return 0;
    }

    cout<<"False"<<endl;

    return 0;
}