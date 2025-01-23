#include<bits/stdc++.h>
using namespace std;

void paritySort(vector<int>& nums){


      int i = -1;
        int j = 0;
        int n = nums.size();

        while(j < n){

            if(nums[j]%2 == 0 && i+1 != j){
                swap(nums[i+1], nums[j]);
                i++;
                j++;
            }
            else if(nums[j]%2 == 0){
                i = j;
                j++;
            }
            else if(nums[j]%2 == 1){
                    j++;
            }
        }

}

int main(){

        vector<int> nums = {3,1,2,4};

        paritySort(nums);

        for(int i=0;i<nums.size();i++){
            cout<<nums[i]<<" ";
        }


}