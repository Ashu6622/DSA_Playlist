#include<bits/stdc++.h>
using namespace std;

int main(){

    vector<int> nums = {1,2,3,1};

    int k = 3;

    map<int,int> mp;

    for(int i=0;i<nums.size();i++){

        if(mp.find(nums[i]) != mp.end() && abs(mp[nums[i]] - i) <= k){
                cout<<"true"<<endl;
                return 0;
        }
            
            mp[nums[i]] = i;
    }

    cout<<"false"<<endl;
            
}