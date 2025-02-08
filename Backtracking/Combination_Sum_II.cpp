#include<bits/stdc++.h>
using namespace std;

void combination(int index, int sum, vector<int> &nums, int k, vector<int>& temp){

    if(index >= nums.size()){

        if(sum == k){
            for(int i=0;i<temp.size();i++){
                cout<<temp[i]<<" ";
            }
            cout<<endl;
        }

        return;
    }

    if(sum+nums[index] <= k){
        temp.push_back(nums[index]);
        combination(index+1, sum+nums[index], nums, k, temp);
        temp.pop_back();
    }

    combination(index+1, sum, nums, k, temp);
}

int main(){

    vector<int> nums = {1, 2, 3, 3, 5};
    int k = 7;
    vector<int> temp;

    combination(0, 0, nums, k, temp);
}