#include<bits/stdc++.h>
using namespace std;

void subsets(int index, vector<int> &nums, int n, vector<int> &temp){

    if(index >= n){
            for(int i=0;i<temp.size();i++){
                cout<<temp[i]<<" ";
            }
            cout<<endl;
            return;
    }

    temp.push_back(nums[index]);
    subsets(index+1, nums, n, temp);
    temp.pop_back();
    subsets(index+1, nums, n, temp);
}

int main(){

    vector<int> nums = {1,2,3};

    vector<int> temp;
    int n = nums.size();

    subsets(0, nums, n, temp);
}