#include<bits/stdc++.h>
using namespace std;   

int solve(vector<int> &wt, vector<int> &vl, int index, int mw, vector<vector<int>> &dp){

        if(index >= wt.size()){
            return 0;
        }

        if(dp[index][mw] != -1){
            return dp[index][mw];
        }

        // can i take the item, i can only take the current item if its weight is less then the current left weight

        int take = INT_MIN;
        if(mw >= wt[index]){
                take = solve(wt, vl, index+1, mw-wt[index], dp) + vl[index];
        }

        int nottake = solve(wt, vl, index+1, mw, dp);

        dp[index][mw] =max(take, nottake);

        return max(take, nottake);
}

int main(){
    vector<int> wt = {4, 5, 6};
    vector<int> vl = {1, 2, 3};
    int mw = 3;

    vector<vector<int>> dp(1001, vector<int>(1001,-1));

    int result = solve(wt, vl, 0, mw, dp);
    cout<<result<<endl;
}