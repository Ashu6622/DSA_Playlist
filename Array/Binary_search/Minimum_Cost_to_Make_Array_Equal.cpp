#include<bits/stdc++.h>
using namespace std;

int findCost(int val, vector<int>& nums, vector<int>& cost){


    int totalCost = 0;

    for(int i=0;i<nums.size();i++){
        totalCost += abs(nums[i] - val) * cost[i];
    }

    return totalCost;

}

int main(){

    vector<int> nums = {2,2,2,2,2};
    vector<int> cost = {4,2,8,1,3};

    // i will change every number between the minimum and maximum element present in the array,
    // so in this question I know my range of ans will lie between minimum and maximum element of the array

    int start = *min_element(nums.begin(), nums.end());
    int end = *max_element(nums.begin(), nums.end());

    int minCost = INT_MAX;

    while(start <= end){

        int mid = (start+end)/2;

        int cost_mid = findCost(mid, nums, cost);
        int cost_right = findCost(mid+1, nums, cost);

        minCost = min(cost_mid, cost_right);

        if(cost_mid < cost_right){
            end = mid-1;
        }
        else{
            start = mid+1;
        }
    }

   cout<<minCost<<endl;

}