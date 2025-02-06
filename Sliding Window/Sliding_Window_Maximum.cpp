#include<bits/stdc++.h>
using namespace std;


int main(){

    vector<int> nums = {1,3,-1,-3,5,3,6,7};

    int k = 3;

     deque<int> dq;
        vector<int> output;
        int i=0;
        int j=0;
        int n = nums.size();

        while(j < n){
            
            if(j-i+1 > k){

                if(i == dq.front()){
                    dq.pop_front();
                }
                i++;
            }

            while(!dq.empty() && nums[dq.back()] <= nums[j]){
                dq.pop_back();
            }

            dq.push_back(j);

            if(j-i+1 == k){
                output.push_back(nums[dq.front()]);
            }

            j++;
        }

        for(int i=0;i<output.size();i++){
            cout<<output[i]<<" ";
        }


}