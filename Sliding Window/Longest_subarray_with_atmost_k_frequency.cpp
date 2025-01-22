#include<bits/stdc++.h>
using namespace std;

int main(){

    vector<int> nums = {1,2,3,1,2,3,2,3};

    map<int, int> mp;
    int j=0;
    int i=0;
    
    int maxlength = 0;
    int k = 2;


    while(j < nums.size()){

        mp[nums[j]]++;

        while(mp.size() > 0 && mp[nums[j]] > k){
            mp[nums[i]]--;

            if(mp[nums[i]] == 0){
                mp.erase(nums[i]);
            }

            i++;
        }

        maxlength = max(maxlength, j-i+1);
        j++;
    }

    cout<<maxlength<<endl;
}