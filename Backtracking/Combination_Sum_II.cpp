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

            if(i != index && nums[i] == nums[i-1]){  //to avoid the duplicate combinations
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

    vector<int> nums = {2,5,2,1,2};  //we cannot use the same number again in same subset, but the used number can be used in other subset example [1, 2, 2, 2, 5] = (1, 2, 2) here in this subset 1 cannot be used again, but 1 can be used in other subset = (1, 2, 5);
    int k = 5;
    sort(nums.begin(), nums.end());  //by sorting the array duplicates elements comes at alternate indexs, so it becomes easier to eliminate the dulpicate values
    vector<int> temp;

    combination(0, nums, k, temp);
}