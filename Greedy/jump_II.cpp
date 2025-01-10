#include<bits/stdc++.h>
using namespace std;

int main(){

    vector<int> nums = {2,3,0,1,4};

    int right = 0;
    int left = 0;
    int minJumps = 0;

    while(right < nums.size()-1){

        int farJump = 0;  //fartest jump in the interval from left to right

        for(int i=left ; i<=right ; i++){
            farJump = max(farJump, nums[i]+i); //calculating the fartest jump
        }

        minJumps++;
        left = right + 1;
        right = farJump; 
    }

    cout<<minJumps<<endl;
}