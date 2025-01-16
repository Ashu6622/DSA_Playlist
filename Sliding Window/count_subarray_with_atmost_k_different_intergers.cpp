#include<bits/stdc++.h>
using namespace std;

// This is same as Subarrays with K Different Integers

int main(){

        vector<int> nums = {1,2,1,2,3};
        int k = 2;
        int count = 0;
        int i =0;
        int j = 0;

        map<int,int> mp;

        while(j < nums.size()){
                mp[nums[j]]++;

                while(mp.size() > k && j > i){

                    mp[nums[i]]--;
                    if(mp[nums[i]] == 0){
                        mp.erase(nums[i]);
                    }
                    i++;
                }

                count += j - i + 1;
                j++;
        }
        cout<<count<<endl;
}