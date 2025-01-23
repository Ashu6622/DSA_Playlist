#include<bits/stdc++.h>
using namespace std;

void wiggleSort(vector<int>& nums){

        sort(nums.begin(), nums.end());
        int n = nums.size();
        vector<int> temp(n);

        int i = 1;
        int j = n-1;

        while(i < n){

            temp[i] = nums[j];
            j--;
            i+=2;
        }

        i = 0;
        while(i < n){

            temp[i] = nums[j];
            i+=2;
            j--;
        }

        for(int i=0;i<n;i++){
            nums[i] = temp[i];
        }
}

int main(){

    vector<int> nums = {5,5,5,4,4,4,4};

    wiggleSort(nums);

    for(int i=0;i<nums.size();i++){
        cout<<nums[i]<<" ";
    }
}