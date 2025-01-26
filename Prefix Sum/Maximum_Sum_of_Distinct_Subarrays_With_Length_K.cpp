#include<bits/stdc++.h>
using namespace std;


int solve(vector<int> &nums, int k){

    int i=0;
    int j=0;
    int maxSum = 0;
    int sum = 0;
    map<int,int> mp;


    while(j < nums.size()){

          sum += nums[j];
            mp[nums[j]]++;
            

            if(j-i+1 == k && mp.size() == k){
                maxSum = max(sum, maxSum);
                sum -= nums[i];
                mp.erase(nums[i]);
                i++;
            }
            else if(j-i+1 == k && mp.size() < k){
                sum -= nums[i];
                mp[nums[i]]--;
                if(mp[nums[i]] == 0){
                    mp.erase(nums[i]);
                }
                i++;
            }
            j++;
    }

    return maxSum;

}

int main(){

    vector<int> nums = {1,5,4,2,9,9,9};
    int  k = 3;

    int result = solve(nums, k);

    cout<<result<<endl;
}