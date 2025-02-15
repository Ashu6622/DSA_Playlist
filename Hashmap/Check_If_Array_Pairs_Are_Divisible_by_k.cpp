#include<bits/stdc++.h>
using namespace std;

// Given an array of integers arr of even length n and an integer k.

// We want to divide the array into exactly n / 2 pairs such that the sum of each pair is divisible by k.

// Return true If you can find a way to do that or false otherwise.

// imp ->  if (a+b)%k == 0, then a%k = x, b%k = y  and x + y = k 

int main(){

    vector<int> vec = {1,2,3,4,5,10,6,7,8,9};
    int k = 5;

    unordered_map<int, int> mp;

    int countPairs = 0;

    for(int i=0;i<vec.size();i++){

      // Ensure remainder is non-negative
      int rem = ((vec[i] % k) + k) % k;

        if(mp.find(k-rem) != mp.end()){

            mp[(k - rem) % k]--;

            if (mp[(k - rem) % k] == 0) {
                mp.erase((k - rem) % k);
            }

            countPairs++;

            continue;
        }


        if (rem == 0) {
            mp[rem]++;
            if (mp[rem] % 2 == 0) {
                countPairs++;
                mp.erase(rem);
            }
            continue;
        }

        // Store remainder count
        mp[rem]++;
    }

    

    int totalPairs = vec.size()/2;
    

    if(totalPairs == countPairs){
        cout<<"True";
        return 0;
    }

    cout<<"False"<<endl;
}