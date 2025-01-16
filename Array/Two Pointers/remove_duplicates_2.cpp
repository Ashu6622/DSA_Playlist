#include<bits/stdc++.h>
using namespace std;

int main(){
        vector<int> nums = {1, 2, 3, 4, 5};

        int i = 0;
        int j = 1;

        int count = 1;

        while(j < nums.size()){

            if(nums[i] == nums[j] && count < 2){

                nums[i+1] = nums[j];
                count++;
                i++;
            }
            else if(nums[i] != nums[j]){
                nums[i+1] = nums[j];
                i++;
                count = 1;
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