#include<bits/stdc++.h>
using namespace std;

int main(){

    vector<int> nums = {-1,3,5,1,4,2,-9};

    map<int,int> mp;
    mp[0] = 1;
    int sum = 0;
    int target = 6;
    int cnt = 0;

    for(int i=0;i<nums.size();i++){

        sum += nums[i];

        if(mp.find(sum-target) != mp.end()){
                cnt++;
                mp.clear();  //here map is clear and sum is reset to 0 because we must not used overlapping subarrays i,e element used in one subarray must not be used in another subarray
                mp[0]++;
                sum = 0;
        }
        else{
            mp[sum]++;
        }

    }

    cout<<cnt<<endl;

}