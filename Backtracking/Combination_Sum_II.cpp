#include<bits/stdc++.h>
using namespace std;

void combination(int index, vector<int> &nums, int k, vector<int>& temp){
        
        if(k==0){
            for(int i=0;i<temp.size();i++){
                cout<<temp[i]<<" ";
            }
            cout<<endl;
            return;
        }

        for(int i=index; i<nums.size(); i++){

            if(i != index && nums[i] == nums[i-1]){
                continue;
            }   

            if(k < nums[i]){  //array is sorted, so there will be always equal or greater elements ahead
                return;
            }

            temp.push_back(nums[i]);
            combination(i+1, nums, k-nums[i], temp);
            temp.pop_back();
        }
}

int main(){

    vector<int> nums = {2,5,2,1,2};
    int k = 5;
    sort(nums.begin(), nums.end());
    vector<int> temp;

    combination(0, nums, k, temp);
}