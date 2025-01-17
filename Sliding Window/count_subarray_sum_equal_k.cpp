#include<bits/stdc++.h>
using namespace std;

int main(){

        vector<int> nums = {0,1,1,0,0};
        int k = 2;

        map<int,int> mp;
        int sum = 0;
        int count = 0;
        mp[0] = 1;

        for(int i=0;i<nums.size();i++){

            sum += nums[i];

            if(mp.find(sum-k) != mp.end()){
                count += mp[sum-k];
            }

            mp[sum]++;

        }

        cout<<count<<endl;
}