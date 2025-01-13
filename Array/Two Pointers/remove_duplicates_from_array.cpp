#include<bits/stdc++.h>
using namespace std;

int main(){

    vector<int> nums = {0, 0, 1, 1, 1, 2, 2, 3, 3, 4};

    int i = 0;
    int j = 1;

    while(j < nums.size()){

        if(nums[i] != nums[j]){
            nums[i+1] = nums[j];
            i++;
        }
        j++;
    }
    
    i++;

    while(i < nums.size()){
        nums[i] = -1;
        i++;
    }

    for(int i=0;i<nums.size();i++){
        cout<<nums[i]<<" ";
    }
}