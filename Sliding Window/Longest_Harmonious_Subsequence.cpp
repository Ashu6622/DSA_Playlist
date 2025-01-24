#include<bits/stdc++.h>
using namespace std;

int main(){

        vector<int> nums = {1,1,2,2,2,4,4};

        sort(nums.begin(), nums.end());

        int i = 0;
        int j = 0;
        int maxi = INT_MIN;
        int mini = INT_MAX;
        int maxlength = 0;

        while(j < nums.size()){

            maxi = max(maxi,nums[j]);
            mini = min(mini, nums[j]);

            // cout<<maxi<<" "<<mini<<endl;

            while(mini != maxi && maxi - mini != 1  && j >= i ){
                i++;
                mini = nums[i];
            }


            if(mini != maxi){
                maxlength = max(maxlength, j-i+1);
            }

            j++;

        }
        cout<<maxlength<<endl;
}