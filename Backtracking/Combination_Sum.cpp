#include<bits/stdc++.h>
using namespace std;


void combination(vector<int> nums, int index, int sum, int& k,  vector<int> &temp){

    if(index >= nums.size()){
        if(sum == k){
            for(int i=0;i<temp.size();i++){
                cout<<temp[i]<<" ";
            }
            cout<<endl;
        }
        return;
    }

    if(sum + nums[index] <= k){
        temp.push_back(nums[index]);
        combination(nums, index, sum+nums[index], k, temp);
        temp.pop_back();
    }

    combination(nums, index+1, sum, k, temp);
}


int main(){

    vector<int> nums = {2, 7, 6, 5};
    int k = 3;

    vector<int> temp;

    combination(nums, 0, 0, k, temp);
}