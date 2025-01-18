#include<bits/stdc++.h>
using namespace std;

int main(){

    vector<int> nums = {0,0,0,0,0};
    
    int count = 0;
    int k = 0;

    map<int,int> mp;
    // in the map we are storing the prefix sum and the starting sum is 0, so initially we are storing 0
    int sum = 0;
    mp[sum] = 1; 

    for(int i=0;i<nums.size();i++){

        sum += nums[i];

        if(mp.find(sum-k) != mp.end()){
            count += mp[sum-k];
        }

        mp[sum]++;
    }

    cout<<count<<endl;

}
