#include<bits/stdc++.h>
using namespace std;

int main(){

    vector<int> nums = {-3,0,1,-2};

    long long suffixPrt = 1;
    long long prefixPrt = 1;

    long long maxPrdt = INT_MIN;

    int j = nums.size()-1;

    for(int i=0;i<nums.size();i++){

        // if at any momemt prefix or suffix becomes zero, then it make the rest of the array product zero. so to avoid this we are reinitializing it to 1

        if(prefixPrt == 0){
            prefixPrt = 1;
        }

        if(suffixPrt == 0){
            suffixPrt = 1;
        }

            prefixPrt *= nums[i];
            suffixPrt *= nums[j];

            long long prt = max(prefixPrt, suffixPrt);
            maxPrdt = max(maxPrdt, prt);
            j--; 
    }

    cout<<maxPrdt<<endl;
}