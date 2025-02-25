#include<bits/stdc++.h>
using namespace std;

int main(){

    vector<int> nums = {1,2,1,3,5,6,4};

    int n = nums.size();
 
    
    if(nums.size() == 1){
        cout<<nums[0]<<endl;
        return 0;
    }

    if(nums[0] > nums[1]){
        cout<<nums[0]<<endl;
        return 0;
    }

    if(nums[n-1] > nums[n-2]){
        cout<<nums[n-1]<<endl;
        return 0;
    }

    int s = 1;
    int e = n-2;

    while(s <= e){

        int mid = (s+e)/2;

        if(nums[mid+1] < nums[mid] && nums[mid] > nums[mid-1]){
            cout<<nums[mid]<<endl;
            return 0;
        }

        if(nums[mid] > nums[mid-1]){
            s = mid+1;
        }
        else{
            e = mid-1;
        }
    }
}