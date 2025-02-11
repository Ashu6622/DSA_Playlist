#include<bits/stdc++.h>
using namespace std;

int main(){

    vector<int> nums = {0,3,7,2,5,8,4,6,0,1};
    unordered_map<int,int> mp;

    // insert all the elements into the map
    for(int i=0;i<nums.size();i++){
        mp[nums[i]]++;
    }

    int maxlength = 0;

    for(int i=0;i<nums.size();i++){

        
        if(mp.find(nums[i]-1) == mp.end()){   //no consecutive smaller present , so start from current element
            
            int count = 1;
            int n = nums[i];

            for(auto it: mp){
                if(mp.find(n+1) != mp.end()){
                    count++;
                    n = n+1;
                }
                else{
                    break;
                }
            }
            maxlength = max(maxlength, count);
        }

    }

    cout<<maxlength<<endl;

}