#include<bits/stdc++.h>
using namespace std;

int main(){
    vector<vector<int>> nums = {{0, 1, 0}, {0, 0, 0}, {0, 1, 0}};

    //approach-> asked every two person weather they know each other or not, here indexs are person, and if the person know other then it can't be the celebrity
    // if between 0 and 1 , 0 knows 1 but 1 don't know 0 then 1 can be celebrity so take 1 and forward with next person(index) and don't take 0, and same for 0, but if both know each other or both don't know each other then they both can't be the celebrity, so start new iteration with both new person(indexs)

    int n = nums.size();

    int i = 0;
    int j = 1;

    while(j < n && i < n){

        if(nums[i][j] == 1 && nums[j][i] == 0){
                i = j+1;
        }
        else if(nums[j][i] == 1 && nums[i][j] == 0){

        }
        else if(nums[i][j] == 0 && nums[j][i] == 0){

        }
        else if(nums[i][j] == 1 && nums[j][i] == 1){

        }
    }
}