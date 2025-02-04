#include<bits/stdc++.h>
using namespace std;

int main(){

        vector<int> nums = {10,2,30,5,10,50};
    
        int maxSum = 0;
        int sum = nums[0];

        for(int i=1;i<nums.size();i++){
            if(nums[i] > nums[i-1]){
                sum += nums[i];
            }
            else{
                maxSum = max(sum, maxSum);
                sum = nums[i];
            }
        }

        maxSum = max(maxSum, sum);

        cout<<maxSum<<endl;

}