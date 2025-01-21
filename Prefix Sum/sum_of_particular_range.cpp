#include<bits/stdc++.h>
using namespace std;
int main(){

    vector<int> nums = {1,2,3,4,5,6};

    vector<vector<int>> intervals = {{1,5}, {0,5}, {2,3},{ 3,5}};

    int n = nums.size();
    vector<int> prefixSum(n, 0);

    prefixSum[0] = nums[0];

    for(int i=1;i<n;i++){
        prefixSum[i] = prefixSum[i-1] + nums[i];
    }

    for(int i=0;i<intervals.size();i++){

        if(intervals[i][0] == 0){
            cout<<prefixSum[intervals[i][1]]<<" ";
            continue;
        }

        int rangeSum = prefixSum[intervals[i][1]] - prefixSum[intervals[i][0]-1];

        cout<<rangeSum<<" ";
    }
}