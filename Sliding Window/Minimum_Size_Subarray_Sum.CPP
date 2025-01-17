#include<bits/stdc++.h>
using namespace std;

int main(){

    vector<int> nums = {2,3,1,2,4,3};

    int minLength = INT_MAX;
    int k = 7;
    int i = 0;
    int j = 0;
    int sum = 0;

    while(j < nums.size()){
            sum += nums[j];

            while(sum-nums[i] >= k){
                    sum -= nums[i];
                    i++;
            }

            if(sum >= k){
                minLength = min(minLength, j-i+1);
            }
            j++;
    }

    cout<<minLength<<endl;
}