#include<bits/stdc++.h>
using namespace std;

int main(){

    vector<int> nums = {4,5,0,1,2,3};

    int minAns = INT_MAX;

        int s=0;
        int e=nums.size()-1;

        while(s <= e){

            int mid = (s+e)/2;


            if(nums[mid] >= nums[s]){
                minAns = min(minAns, nums[s]);
                s = mid+1;
            }
            else{
                minAns = min(minAns, nums[mid]);
                e = mid-1;
            }
        }

        cout<<minAns<<endl;
        
}